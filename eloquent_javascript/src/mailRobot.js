const roads = require('./graph/map')
const { buildGraph } = require('./graph/graphHelpers')
const { findRoute } = require('./graph/graphHelpers')
const { randomPick } = require('./utils/index')

const roadGraph = buildGraph(roads)

function runRobot(state, robot, memory) {
  for (let turn = 0; ; ++turn) {
    if (state.parcels.length === 0) {
      console.log(`Done in ${turn} turns`)
      return turn
    }

    let action = robot(state, memory)
    state = state.move(roadGraph, action.direction)
    memory = action.memory
    console.log(`Moved to ${action.direction}`)
  }
}

function randomRobot(state) {
  return { direction: randomPick(roadGraph[state.place]) }
}

function goalOrientedRobot({ place, parcels }, route) {
  if (route.length === 0) {
    // take the first parcel
    let parcel = parcels[0]

    // if it hasn't been picked up yet
    if (parcel.place !== place) {

      // find a rout towards the parcel
      route = findRoute(roadGraph, place, parcel.place)
    } else {
      // if it is the one picked up, find a route towards the delivery address
      route = findRoute(roadGraph, place, parcel.address)
    }
  }
  return { direction: route[0], memory: route.slice(1) }
}

function selectShortest(allRoutes, route) {
  route = allRoutes[0]
  for (let r of allRoutes) {
    // start with the shortest route
    if (r.length < route.length) {
      route = r
    }
  }

  return route
}

function myRobot({ place, parcels }, route) {
  const allRoutes = []

  if (route.length === 0) {
    // take all parcels
    for (let parcel of parcels) {
      if (parcel.place !== place) {
        allRoutes.push(findRoute(roadGraph, place, parcel.place))
        route = selectShortest(allRoutes, route)
      } else {
        allRoutes.push(findRoute(roadGraph, place, parcel.address))
        route = selectShortest(allRoutes, route)
      }
    }
  }

  return { direction: route[0], memory: route.slice(1) }
}

module.exports = {
  runRobot,
  randomRobot,
  goalOrientedRobot,
  myRobot,
  roadGraph
}