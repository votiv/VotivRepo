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
