<<<<<<< 3bf3c41d0a2669bbabd7e1cea15155307a10cf4c
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
=======
/**
 * Created by viskyo on 28/01/2016.
 */
(function() {
	'use strict';

	angular
		.module('meanApp')
		.controller('HomeController', HomeController);

	HomeController.$inject = [/*'Books'*/];

	function HomeController(/*Books*/) {

		var hc = this;

		hc.date = new Date();

		// Books.getList()
         //    .then(function(books) {
         //        console.log(books);
         //        hc.books = books;
         //    });

        hc.showContent = function($fileContent) {
            console.log('content', hc.content);
            hc.content = $fileContent;
        };
	}
>>>>>>> message
})();