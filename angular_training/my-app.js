angular
	.module("my-app", [
		'ui.router'
	])
	.config(['$urlRouterProvider', '$stateProvider', function ($urlRouterProvider, $stateProvider) {
		$urlRouterProvider.otherwise('/');

		$stateProvider
			.state('home', {
				url: '/',
				templateUrl: 'template/home.html'
			})
	}]);