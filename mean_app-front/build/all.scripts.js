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
 * Created by votiv on 10/04/2016.
 */
(function() {
    'use strict';

    angular
        .module('meanApp')
        .directive('textFromFile', textFromFile);

    textFromFile.$inject = ['$parse'];

    function textFromFile($parse) {

        return {
            restrict: 'A',
            scope: false,
            link: function(scope, element, attrs) {
                console.log('scope', scope, 'element', element, 'attr', attrs);
                var fn = $parse(attrs.textFromFile);

                element.on('change', function(onChangeEvent) {
                    var reader = new FileReader();
                    console.log('on change event', onChangeEvent);
                    reader.onload = function(onLoadEvent) {
                        console.log('on load', onLoadEvent);
                        scope.$apply(function() {
                            fn(scope, {$fileContent: onLoadEvent.target.result});
                        });
                    };

                    reader.readAsText((onChangeEvent.srcElement || onChangeEvent.target).files[0]);
                });
            }
        }
    }
})();

/**
 * Created by votiv on 10/04/2016.
 */
(function () {

    angular
        .module('meanApp')
        .factory('fileReader', fileReader);

        fileReader.$inject = ["$q", "$log"];

    function fileReader($q, $log) {

        var onLoad = function(reader, deferred, scope) {
            return function () {
                scope.$apply(function () {
                    deferred.resolve(reader.result);
                });
            };
        };

        var onError = function (reader, deferred, scope) {
            return function () {
                scope.$apply(function () {
                    deferred.reject(reader.result);
                });
            };
        };

        var onProgress = function(reader, scope) {
            return function (event) {
                scope.$broadcast("fileProgress",
                    {
                        total: event.total,
                        loaded: event.loaded
                    });
            };
        };

        var getReader = function(deferred, scope) {
            var reader = new FileReader();
            reader.onload = onLoad(reader, deferred, scope);
            reader.onerror = onError(reader, deferred, scope);
            reader.onprogress = onProgress(reader, scope);
            return reader;
        };

        var readAsText = function (file, scope) {
            var deferred = $q.defer();
            console.log('read as', file);
            var reader = getReader(deferred, scope);
            reader.readAsText(file);

            return deferred.promise;
        };

        return {
            readAsText: readAsText
        };
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
//# sourceMappingURL=maps/all.scripts.js.map
