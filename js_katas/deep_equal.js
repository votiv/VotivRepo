
function deepEqual(o1, o2) {

	for (let key in o1) {

		// console.log('here', typeof o1[key], typeof o1[key] === 'object');
		// console.log('this', o2[key], o1[key], !o2[key] || o1[key] !== o2[key]);

		// if (!o2[key] || o1[key] !== o2[key]) return false

		if (typeof o1[key] === 'object' && o1[key] !== null) {
			console.log('recursive');
			return deepEqual(o1[key], o2[key])
		} else {

			console.log(o1[key], o2[key], o1[key] === o2[key])
			return o1[key] === o2[key] // nem return te bunko!!!! valami valtozot kene valtoztatni
		}
	}
}


let obj = {here: {is: "an"}, object: 2}

console.log(deepEqual(obj, {here: {is: "an"}, object: 3}))
