const { RUNS } = require('../constants/index')

function randomPick(array) {
  let choice = Math.floor(Math.random() * array.length)
  return array[choice]
}

function getAverage(results) {
  return results.reduce((acc, current) => {
    acc += current
    return acc
  }, 0) / RUNS
}

module.exports = {
  randomPick,
  getAverage
}