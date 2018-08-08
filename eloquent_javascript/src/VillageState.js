const { randomPick } = require('./utils/index')

class VillageState {
  constructor(place, parcels) {
    this.place = place
    this.parcels = parcels
  }

  move(graph, destination) {
    if (!graph[this.place].includes(destination)) {
      return this
    } else {
      let parcels = this.parcels.map(p => {
        if (p.place !== this.place) return p
        return { place: destination, address: p.address }
      }).filter(p => {
        return p.place !== p.address
      })
      return new VillageState(destination, parcels)
    }
  }
}

VillageState.random = (graph, parcelCount = 5) => {
  let parcels = []
  for (let i = 0; i < parcelCount; ++i) {
    let address = randomPick(Object.keys(graph))
    let place
    do {
      place = randomPick(Object.keys(graph))
    } while (place === address)
    parcels.push({ place, address })
  }
  return new VillageState('Post Office', parcels)
}

module.exports = VillageState