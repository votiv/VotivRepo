'use strict';

angular
	.module('meanApp')
	.controller('HomeController', ['$scope', function ($scope) {

		$scope.date = new Date();
	}]);
