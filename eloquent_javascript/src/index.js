const VillageState = require('./VillageState')
const { runRobot, goalOrientedRobot, roadGraph } = require('./mailRobot')
const RUNS = 100

function compareRobots(r1, m1, r2, m2) {
  const results = { r1: [], r2: [] }

  for (let i = 0; i < RUNS; ++i) {
    const r1Result = runRobot(VillageState.random(roadGraph), goalOrientedRobot, m1)
    const r2Result = runRobot(VillageState.random(roadGraph), goalOrientedRobot, m2)

    results.r1.push(r1Result)
    results.r2.push(r2Result)
  }

  const result1 = getAverage(results.r1)
  const result2 = getAverage(results.r2)

  console.log('average', result1, result2)
}

function getAverage(results) {
  return (results.reduce((acc, current) => {
    acc += current
    return acc
  }, 0) / RUNS)
}

compareRobots(goalOrientedRobot, [], goalOrientedRobot, [])
