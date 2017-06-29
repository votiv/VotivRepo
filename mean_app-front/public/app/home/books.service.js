/**
 * Created by votiv on 28/04/2016.
 */
(function() {
    'use strict';

    angular
        .module('meanApp')
        .factory('booksService', booksService);

    booksService.$inject = ['Restangular'];

    function booksService(Restangular) {

        return {
            getBooks: getBooks
        };

        function getBooks() {
            // return Restangular.service('books');
        }
    }
})();
