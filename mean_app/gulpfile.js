/**
 * Created by viskyo on 29/01/2016.
 */
var gulp = require('gulp');
var uglify = require('gulp-uglify');
var concat = require('gulp-concat');
var sourcemaps = require('gulp-sourcemaps');
var sass = require('gulp-sass');
var autoprefixer = require('gulp-autoprefixer');
var rename = require('gulp-rename');
var gutil = require('gulp-util');

gutil.env.type = 'development';

gulp.task('styles', function() {
	return gulp
	    .src('./public/styles/main.scss')
		.pipe(sourcemaps.init())
		.pipe(sass().on('error', sass.logError))
		.pipe(autoprefixer())
		.pipe(rename('all.styles.css'))
		.pipe(sourcemaps.write('./maps'))
		.pipe(gulp.dest('./build'));
});

gulp.task('scripts', function() {
	return gulp.src('public/app/**/*.js')
		.pipe(sourcemaps.init())
		.pipe(concat('all.scripts.js'))
		//only uglify if gulp is ran with '--type production'
		.pipe(gutil.env.type === 'production' ? uglify() : gutil.noop())
		.pipe(sourcemaps.write('./maps'))
		.pipe(gulp.dest('./build'));
});

gulp.task('libraries', function() {

    var source = [
        'public/libraries/angular.min.js',
        'public/libraries/angular-ui-router.min.js'
    ];

    return gulp.src(source)
        .pipe(sourcemaps.init())
        .pipe(concat('all.libraries.js'))
        .pipe(sourcemaps.write('./maps'))
        .pipe(gulp.dest('./build'));
});

gulp.task('default', ['scripts', 'libraries', 'styles']);
