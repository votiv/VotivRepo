'use strict';

function createBoard(size) {

	let str = '';

	for (var i = 0; i < size; ++i) {

		for (var j = 0; j < size; ++j) {

			(i + j) % 2 == 0 ? str += ' ' : str += '#';
		}
		str += '\n';
	}

	return str;
}

console.log(createBoard(23))
