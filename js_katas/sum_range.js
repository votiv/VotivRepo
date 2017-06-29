
function reverse(array) {

<<<<<<< 3bf3c41d0a2669bbabd7e1cea15155307a10cf4c
	let copy = [],
			i = array.length - 1

	while (i >= 0) {

		copy.push(array[i])
		--i
	}

	return copy
=======
	let reverse = []
>>>>>>> message
}

function range(start, end, step) {

<<<<<<< 3bf3c41d0a2669bbabd7e1cea15155307a10cf4c
	let ret = [],
=======
	let array = [],
>>>>>>> message
			rev = false,
			$start,
			$end

<<<<<<< 3bf3c41d0a2669bbabd7e1cea15155307a10cf4c
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
=======
			if (start === end) return [start]

			if (!!step && step < 0) {
				rev = true
				step *= -1
			}

			while (start <= end) {
				array.push(start)

				if (!!step)
					start += step
				else
					++start
			}

			if (!array.length) {
				while (end <= start) {
					array.push(end)

					if (!!step)
						end += step
					else
						++end
				}
			}

			return rev ? reverse(array) : array
}

console.log(range(1, 10, 2))
>>>>>>> message
