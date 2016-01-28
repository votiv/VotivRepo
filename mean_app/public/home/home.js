/**
 * Created by viskyo on 28/01/2016.
 */
'use strict';

meanApp.controller('HomeController', ['$scope', function ($scope) {
        console.log('something');
        $scope.date = new Date();
        console.log($scope);
    }]);
