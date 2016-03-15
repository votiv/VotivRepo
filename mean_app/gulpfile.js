/**
 * Created by viskyo on 29/01/2016.
 */
var gulp = require('gulp');
var uglify = require('gulp-uglify');
var concat = require('gulp-concat');
var es = require('event-stream');
var sourcemaps = require('gulp-sourcemaps');
var sass = require('gulp-sass');
var autoprefixer = require('gulp-autoprefixer');
var rename = require('gulp-rename');



gulp.task('styles', function() {
	return gulp
	    .src('./app/styles/main.scss')
		.pipe(sourcemaps.init())
		.pipe(sass().on('error', sass.logError))
		.pipe(sourcemaps.write('./maps'))
		.pipe(autoprefixer())
		.pipe(rename('all.styles.css'))
		.pipe(gulp.dest('./build'));
});

gulp.task('scripts', function () {
    return gulp.src()
});

gulp.task('default', ['sass']);
