'use strict';

const http = require('http'),
	  path = require('path');

const express = require('express');

const hostname = '127.0.0.1';
const port = 1337;

var app = express();
app.set('view engine', 'ejs');

app.get('/', function (req, res) {
	res.render('index');
});

var server = http.createServer(app);
server.listen(port);
