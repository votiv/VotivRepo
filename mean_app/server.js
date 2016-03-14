/**
 * Created by viskyo on 28/01/2016.
 */
'use strict';

var http = require('http');
var path = require('path');

var express = require('express');
var app = express();

app.set('port', (process.env.PORT || 3500));
app.use(express.static(path.join(__dirname, 'app')));

app.all('/*', function(request, response, next) {
    // Just send the index.html for other files to support HTML5Mode
    response.sendFile('index.html', { root: __dirname });
});

var server = http.createServer(app);
server.listen(app.get('port'), function () {
    console.log('Server listening to port: ' + app.get('port'));
});
