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