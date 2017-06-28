
/*
	Will add element to the front of the list
*/
function prepend(element, list) {

	if (!!list && !!Object.keys(list).length) {

		let newList = {}

		newList.value = element.value
		newList.next = list
		return newList

	} else {

		return element
	}
}

/*
	Will return value property of the element at position indicated by number if
	it exists, or undefined otherwise
*/
function nth(list, number) {

	if (number === 0)
		return list.value
	else
		return !!list.next ? nth(list.next, number - 1) : undefined
}

/*
	Will convert the provided array into a list
*/
function arrayToList(array) {

	let list = null,
			i = array.length - 1

	while (i >= 0) {

		list = prepend({ value: array[i], next: list }, list)
		--i
	}

	return list
}

function listToArray(list) {

	let array = []

	for (var node = list; node; node = node.next) {

		array.push(node.value)
	}

	return array
}


let list = {
	value: 1,
	next: {
		value: 2,
		next: {
			value: 3,
			next: null
		}
	}
}

list = prepend({value: 0, next: null}, list)
list = prepend({value: -1, next: null}, list)

console.log(listToArray(list))
// console.log(nth(arrayToList([10, 20]), 1))

// console.log('dostuff', JSON.stringify(list, null, 2))
// console.log(nth(list, 4));
