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
                controller: 'HomeController',
                controllerAs: 'hc'
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

        $mdThemingProvider.theme('default')
            .primaryPalette('orange')
            .accentPalette('deep-orange')
            .backgroundPalette('grey');
    }
})();
/**
 * Created by viskyo on 28/01/2016.
 */
(function() {
	'use strict';

	angular
		.module('meanApp')
		.controller('HomeController', HomeController);

	HomeController.$inject = [];

	function HomeController() {

		var hc = this;

		hc.date = new Date();
	}
})();
//# sourceMappingURL=maps/all.scripts.js.map
