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