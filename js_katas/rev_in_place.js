
function reverseInPlace(array) {

	let tmp,
			i = 0,
			j = array.length - 1

	while (i < j) {

		tmp = array[j]
		array[j] = array[i]
		array[i] = tmp

		++i
		--j
	}

	return array
}

console.log(reverseInPlace([1, 2, 3, 4, 5]));
