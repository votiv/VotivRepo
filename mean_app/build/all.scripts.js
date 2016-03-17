'use strict';

angular
	.module('meanApp', [
		'ui.router'
	]);
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
/**
 * Created by viskyo on 28/01/2016.
 */
'use strict';

angular
    .module('meanApp')
    .controller('HomeController', ['$scope', function ($scope) {
        $scope.date = new Date();
    }]);

'use strict';

angular
	.module('meanApp')
	.controller('HomeController', ['$scope', function ($scope) {

		$scope.date = new Date();
	}]);

//# sourceMappingURL=maps/all.scripts.js.map
