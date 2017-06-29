<<<<<<< 3bf3c41d0a2669bbabd7e1cea15155307a10cf4c
/**
 * Created by viskyo on 28/01/2016.
 */
'use strict';

var http = require('http');
var path = require('path');

var express = require('express');
var app = express();

app.set('port', (process.env.PORT || 3500));
app.use(express.static(__dirname + ''));

app.all('/*', function(request, response, next) {
    // Just send the index.html for other files to support HTML5Mode
    response.sendFile('index.html', { root: __dirname });
});

app.listen(app.get('port'), function () {
    console.log('Server listening to port: ' + app.get('port'));
});
=======
/**
 * Created by viskyo on 28/01/2016.
 */
'use strict';

var http = require('http');
var path = require('path');

var express = require('express');
var app = express();

var fs = require('fs');

app.set('port', (process.env.PORT || 3500));
app.use(express.static(__dirname + ''));

app.all('/', function(request, response, next) {
    // Just send the index.html for other files to support HTML5Mode
    response.sendFile('index.html', { root: __dirname });
});

app.get('/books', function(request, response, next) {

    fs.readFile('./assets/genezis-1.txt', 'utf8', function(error, data) {
        if (error) {
            console.log('error', error);
        }

        response.send(data);
    });
});

app.listen(app.get('port'), function () {
    console.log('Server listening to port: ' + app.get('port'));
});
>>>>>>> message
