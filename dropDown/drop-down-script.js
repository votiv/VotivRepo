/**
 * Created by othniel.visky on 15.09.2016.
 */
var dropDown = (function () {
    'use strict';

    var filteredA = [];

    // Add event listener to the dropdown items, so on click the input fields value updates
    function loadElement() {

        if (document.getElementById('partners')) {
            var typeInput = document.getElementById('partnerType');
            var typeDropDown = document.getElementById('type-dropdown');
            var options = typeDropDown.children;
            var partnerInput = document.getElementById('partnerInput');


            // Click handler for the partner type input field.
            typeInput.onclick = function (event) {
                // Close the other drop down if it is open
                // If the type input filed is empty we simply open the drop down
                var partnerDD;

                if (!isHidden(document.getElementById('banks-partner-dropdown'))) {
                    partnerDD = document.getElementById('banks-partner-dropdown');
                } else if (!isHidden(document.getElementById('emitters-partner-dropdown'))) {
                    partnerDD = document.getElementById('emitters-partner-dropdown');
                }
                if (partnerDD && partnerDD.classList.contains('show')) {
                    partnerDD.classList.remove('show');
                }
                if (typeInput.value === '') {

                    typeDropDown.classList.toggle('show');
                    document.getElementById('partnerInput').value = '';
                } else {
                    var preselect = typeInput.value;

                    for (var i = 0; i < options.length; i++) {
                        if (options[i].text === preselect) {
                            options[i].classList.add('cursor');
                        } else {
                            if (options[i].classList.contains('cursor')) {
                                options[i].classList.remove('cursor')
                            }
                        }
                    }
                    typeDropDown.classList.toggle('show');
                }
            };

            typeDropDownConfiguration(typeInput, typeDropDown, options, partnerInputConfiguration);
        }
    }

    // Configure partner type drop down. Also call partner input configuration function
    function typeDropDownConfiguration(typeInput, typeDropDown, options, partnerInputConfiguration) {

        typeKeyBindings(typeInput, typeDropDown);
        for (var i = 0; i < options.length; i++) {
            options[i].onclick = typeClickHandler;
        }

        partnerInputConfiguration(typeInput);
    }

    // Click event listener and key bindings for the partner input field
    function partnerInputConfiguration(typeInput) {
        var partnerInput = document.getElementById('partnerInput');

        partnerInput.onclick = function (event) {
            var type = getRawTypeValue(typeInput.value.toLowerCase());
            var partnerDropDown = document.getElementById(type + '-partner-dropdown');

            if (type) {
                if (event.target.value === '') {
                    partnerDropDownConfiguration(partnerDropDown, partnerInput);
                    clearDropDowns(partnerDropDown);
                    partnerDropDown.classList.toggle('show');
                } else {
                    var preselected = event.target.value;
                    clearDropDowns(partnerDropDown);
                    partnerDropDownConfiguration(partnerDropDown, partnerInput, preselected);
                    partnerDropDown.classList.toggle('show');
                }
            }
        };

        // key bindings for partner input
        partnerInput.onkeydown = function (event) {
            var type = getRawTypeValue(typeInput.value.toLowerCase());
            var partnerDropDown = document.getElementById(type + '-partner-dropdown');

            switch (event.keyCode) {
                case 40: //down
                    if (isHidden(partnerDropDown)) {
                        if (event.target.value === '') {
                            partnerDropDownConfiguration(partnerDropDown, partnerInput);
                            partnerDropDown.classList.toggle('show');
                        } else {
                            preselected = event.target.value;

                            partnerDropDownConfiguration(partnerDropDown, partnerInput, preselected);
                            partnerDropDown.classList.toggle('show');
                        }
                        if (partnerDropDown.firstElementChild.id === 'search-input') {
                            partnerDropDown.firstElementChild.focus();
                        }
                    } else if (!isHidden(partnerDropDown) && document.activeElement.id === partnerInput.id) {
                        if (partnerDropDown.firstElementChild.id === 'search-input') {
                            partnerDropDown.firstElementChild.focus();
                        }
                    }
                    break;
                case 27: //escape
                    partnerDropDown.classList.remove('show');
                    clearDropDowns(partnerInput);
                    break;
                case 13: //enter
                    event.preventDefault();
                    if (event.target.value === '') {
                        partnerDropDownConfiguration(partnerDropDown, partnerInput);
                        partnerDropDown.classList.toggle('show');
                    } else {
                        var preselected = event.target.value;

                        partnerDropDownConfiguration(partnerDropDown, partnerInput, preselected);
                        partnerDropDown.classList.toggle('show');
                    }
                    if (partnerDropDown.firstElementChild.id === 'search-input') {
                        partnerDropDown.firstElementChild.focus();
                    }
                    break;
                case 9: // tab
                    if (!isHidden(partnerDropDown)) {
                        event.preventDefault();
                    }
                    break;
                default:
                    break;
            }
        };
    }

    // Configure the partner drop down: add search input and click event listener, also create key bindings
    function partnerDropDownConfiguration(partnerDropDown, partnerInput, preselected) {

        // if the search input field is already in the DOM, remove it first, then recreate it.
        if (document.getElementById('search-input')) {
            document.getElementById('search-input').remove();
        }

        // add filter input field to drop down
        var autocompleteInput = document.createElement('input');
        autocompleteInput.id = "search-input";
        autocompleteInput.type = "text";
        autocompleteInput.autocomplete = "off";
        autocompleteInput.onkeyup = filterContainer;
        autocompleteInput.classList.add("search-input");
        partnerDropDown.insertBefore(autocompleteInput, partnerDropDown.firstElementChild);

        filterContainer();

        // add click event listener to the items in the drop down
        if (partnerDropDown) {
            var a = partnerDropDown.getElementsByTagName('a');
            var checkbox = partnerDropDown.getElementsByClassName('partner-item-wrapper');
            for (var i = 0; i < checkbox.length; i++) {
                checkbox[i].onclick = clickPartnerListItem;
                if (preselected) {
                    var checkElement = checkbox[i].firstElementChild;
                    if (!checkElement.checked && preselected.indexOf(checkElement.nextElementSibling.text) !== -1) {
                        checkbox[i].firstElementChild.checked = true;
                    }
                }
            }
        }

        searchKeyBindings(partnerDropDown, partnerInput, a);
        partnerKeyBindings(partnerDropDown, partnerInput, a);
    }

    function typeKeyBindings(typeInput, typeDropDown) {
        var a = typeDropDown.getElementsByTagName('a');

        typeInput.onkeydown = function (event) {

            switch (event.keyCode) {
                case 40: //down
                    if (isHidden(typeDropDown)) {
                        typeDropDown.classList.add('show');
                    } else if (!isHidden(typeDropDown) && document.activeElement.id === typeInput.id) {
                        a[0].classList.add('cursor');
                        a[0].focus();
                    }
                    break;
                case 13: // enter
                    event.preventDefault();
                    typeDropDown.classList.toggle('show');
                    document.getElementById('partnerInput').value = '';
                    break;
                case 27: //escape
                    if (typeDropDown.classList.contains('show')) {
                        typeDropDown.classList.remove('show');
                    }
                    break;
                default:
                    break;
            }
        };

        typeDropDown.onkeydown = function (event) {
            var cursor = document.getElementsByClassName('cursor')[0];
            var cursorIndex = 0;

            var itemCount = a.length;

            for (var i = 0; i < a.length; i++) {
                if (cursor && a[i].text === cursor.text) {
                    cursorIndex = i;
                }
            }

            switch (event.keyCode) {

                case 40: //down
                    if (cursor) {
                        if (cursor.nextElementSibling) {
                            cursor.nextElementSibling.classList.add('cursor');
                            cursor.classList.remove('cursor');
                            cursor.nextElementSibling.focus();
                        }
                        cursorIndex += 1;

                        if (cursorIndex > itemCount - 1 && itemCount !== 1) {
                            a[0].classList.add('cursor');
                            cursor = a[0];
                            a[itemCount - 1].classList.remove('cursor');
                        }
                    }
                    break;
                case 38: // up
                    if (cursor) {
                        if (cursor.previousElementSibling) {
                            cursor.previousElementSibling.classList.add('cursor');
                            cursor.classList.remove('cursor');
                            cursor.previousElementSibling.focus();
                        }
                        cursorIndex -= 1;

                        if (cursorIndex < 0) {
                            a[0].classList.remove('cursor');
                            a[itemCount - 1].classList.add('cursor');
                            cursor = a[itemCount - 1];
                        }
                    }
                    break;
                case 27: // escape
                    if (cursor) {
                        cursor.classList.remove('cursor');
                    }
                    typeDropDown.classList.remove('show');
                    typeInput.focus();
                    break;
                case 13: // enter
                    event.preventDefault();
                    if (!isHidden(typeDropDown)) {
                        typeInput.value = cursor.text;
                        typeInput.focus();
                        typeDropDown.classList.remove('show');
                        cursor.classList.remove('cursor');
                    }
                    break;
                default:
                    break;
            }
        }
    }

    // Key bindings for the partners drop down
    function partnerKeyBindings(partnerDropDown, partnerInput, array) {
        var searchInput = document.getElementById('search-input');

        // key bindings for partner drop down
        partnerDropDown.onkeydown = function (event) {
            var cursor = partnerDropDown.getElementsByClassName('cursor')[0];
            var cursorIndex = 0;

            var itemCount = array.length;

            for (var i = 0; i < array.length; i++) {
                for (var key in array[i]) {
                    if (cursor && array[i].hasOwnProperty(key) && array[i][key].text === cursor.text) {
                        cursorIndex = i;
                    }
                }
            }

            switch (event.keyCode) {
                case 40: // down
                    if (cursor) {
                        if (cursor.parentElement.nextElementSibling) {
                            var nextElement = cursor.parentElement.nextElementSibling.firstElementChild.nextElementSibling;
                        }
                        if (nextElement && nextElement.style.display !== 'none') {
                            nextElement.classList.add('cursor');
                            cursor.classList.remove('cursor');
                            nextElement.focus();
                        }
                        cursorIndex += 1;

                        if (cursorIndex > itemCount - 1 && itemCount !== 1) {
                            for (key in array[0]) {
                                if (array[0].hasOwnProperty(key)) {
                                    array[0][key].classList.add('cursor');
                                    cursor = array[0][key];
                                }
                            }
                            for (key in array[itemCount - 1]) {
                                if (array[itemCount - 1].hasOwnProperty(key)) {
                                    array[itemCount - 1][key].classList.remove('cursor');
                                }
                            }
                        }
                    }
                    break;
                case 38: // up
                    if (cursor) {
                        if (cursor.parentElement.previousElementSibling && cursor.parentElement.previousElementSibling.id !== 'search-input') {
                            var previousElement = cursor.parentElement.previousElementSibling.firstElementChild.nextElementSibling;
                        }
                        if (previousElement && previousElement.style.display !== 'none') {
                            previousElement.classList.add('cursor');
                            cursor.classList.remove('cursor');
                            previousElement.focus();
                        }
                        cursorIndex -= 1;

                        if (cursorIndex < 0) {
                            for (key in array[0]) {
                                if (array[0].hasOwnProperty(key)) {
                                    array[0][key].classList.remove('cursor');
                                }
                            }
                            for (key in array[itemCount - 1]) {
                                if (array[itemCount - 1].hasOwnProperty(key)) {
                                    array[itemCount - 1][key].classList.add('cursor');
                                    cursor = array[itemCount - 1][key];
                                }
                            }
                        }
                    }
                    break;
                case 32: //space
                case 13: // enter
                    event.preventDefault();
                    if (!isHidden(partnerDropDown)) {
                        if (partnerInput.value.indexOf(cursor.text) !== -1) {
                            if (partnerInput.value.indexOf(', ' + cursor.text) !== -1) {
                                partnerInput.value = partnerInput.value.replace(', ' + cursor.text, '');
                            } else {
                                partnerInput.value = partnerInput.value.replace(cursor.text, '');
                            }

                            if (partnerInput.value.charAt(0) === ',') {
                                partnerInput.value = partnerInput.value.replace(', ', '');
                            }

                            if (cursor.previousElementSibling.checked) {
                                cursor.previousElementSibling.checked = false;
                            }
                        } else {
                            if (partnerInput.value === '') {
                                partnerInput.value += cursor.text;
                            } else {
                                partnerInput.value += ', ' + cursor.text;
                            }
                            if (!cursor.previousElementSibling.checked) {
                                cursor.previousElementSibling.checked = true;
                            }
                        }
                    }
                    break;
                case 27: // escape
                    if (cursor) {
                        cursor.classList.remove('cursor');
                    }
                    if (partnerDropDown.firstElementChild.id === 'search-input') {
                        partnerDropDown.firstElementChild.focus();
                    }
                    break;
                default:
                    break;
            }
        };
    }

    // Key bindings for the autocomplete field in the partners drop down
    function searchKeyBindings(partnerDropDown, partnerInput, array) {
        if (partnerDropDown.firstElementChild.id === 'search-input') {
            var searchInput = partnerDropDown.firstElementChild;
        }

        searchInput.onkeydown = function (event) {

            switch (event.keyCode) {
                case 40: //down
                    for (var key in array[0]) {
                        if (array[0].hasOwnProperty(key)) {
                            array[0][key].classList.add('cursor');
                            array[0][key].focus();
                        }
                    }
                    event.stopPropagation();
                    break;
                case 38: // up
                    break;
                case 13: // enter
                    event.preventDefault();
                    partnerDropDown.classList.remove('show');
                    partnerInput.focus();
                    break;
                case 27: // escape
                    partnerDropDown.classList.remove('show');
                    partnerInput.focus();
                    clearDropDowns(partnerInput);
                    break;
                default:
                    break;
            }
        };
    }

    var filterContainer = function () {
        filterFunction(afterFilterFunction);
    };

    var afterFilterFunction = function (array, partnerDropDown) {
        var partnerInput = document.getElementById('partnerInput');

        searchKeyBindings(partnerDropDown, partnerInput, array);
        partnerKeyBindings(partnerDropDown, partnerInput, array);
    };

    // Filter the dropdown content based on what the user types in the input field
    var filterFunction = function (afterFilterFunction) {
        var input = document.getElementById('search-input');
        var type = getRawTypeValue(document.getElementById('partnerType').value.toLowerCase());
        var partnerDropDown = document.getElementById(type + '-partner-dropdown');
        var a = partnerDropDown.getElementsByTagName('a');
        filteredA = [];

        if (input) {
            var filter = input.value.toUpperCase();
            for (var i = 0; i < a.length; i++) {
                if (a[i].innerHTML.toUpperCase().indexOf(filter) > -1) {
                    a[i].parentElement.style.display = '';
                    a[i].style.display = '';
                    addFiltered(a[i]);
                } else {
                    a[i].parentElement.style.display = 'none';
                    a[i].style.display = 'none';
                    removeFiltered(a[i]);
                }
            }
        }
        afterFilterFunction(filteredA, partnerDropDown);
    };

    function addFiltered(item) {
        var obj = {};

        if (filteredA.length > 0) {
            if (!filteredA[item.text]) {
                obj[item.text] = item;
                filteredA.push(obj)
            }
        } else {
            obj[item.text] = item;
            filteredA.push(obj)
        }
        return filteredA;
    }

    function removeFiltered(item) {

        for (var i = 0; i < filteredA.length; i++) {
            if (item.text in filteredA) {
                filteredA.remove(filteredA[item.text]);
            }
        }

        return filteredA;
    }

    // removes the cursor class
    function clearDropDowns(dropdown) {
        var a = dropdown.getElementsByTagName('a');

        // On blur remove cursor class, so that after closing and reopening the dropdown there won't be multiple elements with cursor
        for (var i = 0; i < a.length; i++) {
            if (a[i].classList.contains('cursor')) {
                a[i].classList.remove('cursor');
            }
            if (a[i].previousElementSibling.checked) {
                a[i].previousElementSibling.checked = false;
            }
        }
    }

    // Click event handler for the items in partner type drop down
    function typeClickHandler() {
        var typeInput = document.getElementById('partnerType');

        typeInput.value = this.innerHTML;
        document.getElementById('partnerInput').value = '';
    }

    // Event listener for click on the partner list items. On click update the input field and toggle active class to clicked item.
    // The cursor class indicates the last item the user has interacted with via click or up/down arrow key.
    function clickPartnerListItem(event) {
        var input = document.getElementById('partnerInput');
        var dd = document.getElementsByClassName('cursor');
        var target = event.target;

        if (event.target.matches('input[type="checkbox"]')) {
            target = event.target.nextElementSibling;
        }

        if (event.target.matches('.partner-item')) {
            var checkbox = event.target.previousElementSibling;
            checkbox.checked = checkbox.checked ? false : true;
        }

        // if we have cursor on an item remove it and add it to the clicked element
        if (dd[0]) {
            dd[0].classList.remove('cursor');
        }
        target.classList.add('cursor');

        if (input.value.indexOf(target.text) !== -1) {
            if (input.value.indexOf(', ' + target.text) !== -1) {
                input.value = input.value.replace(', ' + target.text, '');
            } else {
                input.value = input.value.replace(target.text, '');
            }

            if (input.value.charAt(0) === ',') {
                input.value = input.value.replace(', ', '');
            }
        } else {
            if (input.value === '') {
                input.value += target.text;
            } else {
                input.value += ', ' + target.text;
            }
        }
    }

    // check whether element is visible
    function isHidden(el) {
        var style = window.getComputedStyle(el);
        return (style.display === 'none')
    }

    var getRawTypeValue = function (inputValue) {

        if (document.getElementById('banks').innerHTML.toLowerCase().trim() === inputValue.trim()) {
            return 'banks';
        } else if (document.getElementById('emitters').innerHTML.toLowerCase().trim() === inputValue.trim()) {
            return 'emitters';
        } else {
            return null;
        }
    };

    return {
        loadElement: loadElement,
        getRawTypeValue: getRawTypeValue
    }
})();