
function reverse(array) {

	let copy = [],
			i = array.length - 1

	while (i >= 0) {

		copy.push(array[i])
		--i
	}

	return copy
}

function range(start, end, step) {

	let ret = [],
			rev = false,
			$start,
			$end

	if (start === end) return start

	if (start < end) {
		$start = start
		$end = end
	} else {
		$start = end
		$end = start
	}

	if (!!step && step < 0) {
		rev = true
		step *= -1
	}

	while ($start <= $end) {

		ret.push($start)

		if (!!step) {
			$start += step
		} else {
			++$start
		}
	}

	return rev ? reverse(ret) : ret
}


console.log(range(1, 10));
console.log(range(10, 1));
console.log(range(10, 1, 2));
console.log(range(1, 10, 2));
console.log(range(5, 2, -1));
console.log(range(1, 10, -2));
