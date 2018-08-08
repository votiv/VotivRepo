const roads = require('./graph/map')
const { buildGraph } = require('./graph/graphHelpers')
const { findRoute } = require('./graph/graphHelpers')

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

function goalOrientedRobot({ place, parcels }, route) {
  if (route.length === 0) {
    let parcel = parcels[0]
    if (parcel.place !== place) {
      route = findRoute(roadGraph, place, parcel.place)
    } else {
      route = findRoute(roadGraph, place, parcel.address)
    }
  }
  return { direction: route[0], memory: route.slice(1) }
}

module.exports = {
  runRobot,
  goalOrientedRobot,
  roadGraph
}