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