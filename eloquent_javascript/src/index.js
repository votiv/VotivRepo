const VillageState = require('./VillageState')
const { runRobot, goalOrientedRobot, randomRobot, myRobot, roadGraph } = require('./mailRobot')
const { getAverage } = require('./utils/index')
const { RUNS } = require('./constants/index')

function compareRobots(r1, m1, r2, m2) {
  const results = { r1: [], r2: [], r3: [] }

  for (let i = 0; i < RUNS; ++i) {
    const r1Result = runRobot(VillageState.random(roadGraph), randomRobot, m1)
    const r2Result = runRobot(VillageState.random(roadGraph), goalOrientedRobot, m2)
    const r3Result = runRobot(VillageState.random(roadGraph), myRobot, m2)

    results.r1.push(r1Result)
    results.r2.push(r2Result)
    results.r3.push(r3Result)
  }

  const result1 = getAverage(results.r1)
  const result2 = getAverage(results.r2)
  const result3 = getAverage(results.r3)

  console.log('average', result1, result2, result3)
}

compareRobots(goalOrientedRobot, [], goalOrientedRobot, [])
