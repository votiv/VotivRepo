/**
 * Created by votiv on 28/04/2016.
 */
(function() {
    'use strict';

    angular
        .module('meanApp')
        .config(configuration);

    configuration.$inject = [/*'$restangularProvider'*/];

    function configuration(/*$restangularProvider*/) {

        // $restangularProvider.setBaseUrl('localhost:3500/');
    }
})();
