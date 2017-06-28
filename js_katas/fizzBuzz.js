
var i = 1,
			str = '';

while (i <= 100) {

	if (i % 3 == 0) {
		str = 'Fizz';
	}

	if (i % 5 == 0) {
		str += 'Buzz';
	}

	console.log(str || i)
	i++;
	str = '';
}
