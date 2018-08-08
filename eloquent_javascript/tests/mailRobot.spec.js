const VillageState = require('../src/VillageState')
const { runRobot, goalOrientedRobot } = require('../src/mailRobot')

describe('the runRobot function', () => {
  const testState = new VillageState('Post Office', [
    { place: 'Farm', address: 'Shop' }
  ])

  it('should run the mail delivery robot. When finished, it should return the number of steps it took', () => {
    expect(runRobot(testState, goalOrientedRobot, [])).toBe(4)
  })
})
