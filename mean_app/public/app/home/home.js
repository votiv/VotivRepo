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