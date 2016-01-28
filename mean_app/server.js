/**
 * Created by viskyo on 28/01/2016.
 */
'use strict';

var http = require('http');
var path = require('path');

var express = require('express');
var app = express();

var morgan = require('morgan');
app.use(morgan('dev'));

app.use(express.static(path.join(__dirname, 'public')));

var port = 3500;
var server = http.createServer(app);
server.listen(port, function () {
    console.log('Server listening to port: ' + port);
});
