(function() {
    'use strict';

    angular
        .module('meanApp', [
            'ui.router',
            'ngMaterial'
        ]);
})();
(function () {
    'use strict';

    angular
        .module('meanApp')
        .config(routeConfig);


    function routeConfig($urlRouterProvider, $stateProvider) {

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

        $urlRouterProvider.otherwise('/');
    }
})();
/**
 * Created by votiv on 20/03/2016.
 */
(function() {
    'use strict';

    angular
        .module('meanApp')
        .config(theme);


    function theme($mdThemingProvider) {

        $mdThemingProvider.definePalette('mainPalette', {
            '50': 'ffebee',
            '100': 'ffcdd2',
            '200': 'ef9a9a',
            '300': 'e57373',
            '400': 'ef5350',
            '500': 'f44336',
            '600': 'e53935',
            '700': 'd32f2f',
            '800': 'c62828',
            '900': 'b71c1c',
            'A100': 'ff8a80',
            'A200': 'ff5252',
            'A400': 'ff1744',
            'A700': 'd50000',
            'contrastDefaultColor': 'dark',    // whether, by default, text (contrast)
                                                // on this palette should be dark or light
            'contrastDarkColors': ['50', '100', //hues which contrast should be 'dark' by default
                '200', '300', '400', 'A100'],
            'contrastLightColors': undefined    // could also specify this if default was 'dark'
        });

        $mdThemingProvider.theme('default')
            .primaryPalette('mainPalette')
    }
})();
/**
 * Created by viskyo on 28/01/2016.
 */
(function() {
    'use strict';

    angular
        .module('meanApp')
        .controller('HomeController', ['$scope', function ($scope) {
            $scope.date = new Date();
        }]);

})();
'use strict';

angular
	.module('meanApp')
	.controller('HomeController', ['$scope', function ($scope) {

		$scope.date = new Date();
	}]);

//# sourceMappingURL=maps/all.scripts.js.map
