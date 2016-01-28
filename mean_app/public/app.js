var meanApp = angular.module('meanApp', [
		'ui.router'
	])
	.config(['$urlRouterProvider', '$stateProvider', function ($urlRouterProvider, $stateProvider) {
		$urlRouterProvider.otherwise('/');

		$stateProvider
			.state('home', {
				url: '/',
				templateUrl: 'templates/home.html',
				controller: 'HomeController'
            });
	}])/*
    .controller('HomeController', ['$scope', function ($scope) {
        console.log('something');
        $scope.date = new Date();
        console.log($scope);
    }])*/;