/**
 * Created by viskyo on 28/01/2016.
 */
(function() {
	'use strict';

	angular
		.module('meanApp')
		.controller('HomeController', HomeController);

	HomeController.$inject = ['$scope'];

	function HomeController($scope
    ) {

		var hc = this;

		hc.date = new Date();

            console.log('here');
        hc.showContent = function($fileContent) {
            console.log('content', hc.content);
            hc.content = $fileContent;
        };
	}
})();