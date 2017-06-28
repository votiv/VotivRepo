
function range(start, end, step) {

	var ret = [],
			$s, $e;

	if (start === end) return start

	if (!!step && step < 0) {
		$s = end;
		$e = start;
	}

	return ret;
}

console.log(range(1, 10));
console.log(range(10, 1));
console.log(range(10, 1, 2));
console.log(range(1, 10, 2));
console.log(range(5, 2, -1));
