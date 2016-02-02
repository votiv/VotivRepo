var meanApp = angular.module('meanApp', [
		'ui.router'
	])
	.config(['$locationProvider', '$urlRouterProvider', '$stateProvider', function ($locationProvider, $urlRouterProvider, $stateProvider) {
		$urlRouterProvider.otherwise('/');
		//$locationProvider.html5Mode(true); //TODO: not sure why it won't work with html5 mode

		$stateProvider
			.state('home', {
				url: '/',
				templateUrl: 'templates/home.html',
				controller: 'HomeController'
            })
            .state('about', {
                url: '/about',
                templateUrl: 'about/about.html'
            });
	}]);