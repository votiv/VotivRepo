'use strict';

angular
	.module('meanApp')
	.config(['$locationProvider', '$urlRouterProvider', '$stateProvider',
		function ($locationProvider, $urlRouterProvider, $stateProvider) {
		$urlRouterProvider.otherwise('/');

		$stateProvider
			.state('home', {
				url: '/',
				templateUrl: 'public/app/home/home.html',
				controller: 'HomeController'
            })
            .state('about', {
                url: '/about',
                templateUrl: 'public/app/about/about.html'
            });
	}]);