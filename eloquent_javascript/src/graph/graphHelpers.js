exports.buildGraph = (edges) => {
  let graph = Object.create(null)

  function addEdge(from, to) {
    if (graph[from] == null) {
      graph[from] = [to]
    } else {
      graph[from].push(to)
    }

  }

  for (let [from, to] of edges.map(e => e.split('-'))) {
    addEdge(from, to)
    addEdge(to, from)
  }

  return graph
}

exports.findRoute = (graph, from, to) => {
  let work = [{ at: from, route: [] }]
  for (let i = 0; i < work.length; ++i) {
    let { at, route } = work[i]
    for (let place of graph[at]) {
      if (place === to) {
        return route.concat(place)
      }
      if (!work.some(w => w.at === place)) {
        work.push({ at: place, route: route.concat(place) })
      }
    }
  }
}
