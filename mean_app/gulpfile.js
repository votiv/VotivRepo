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
var browserSync = require('browser-sync');
var reload = browserSync.reload;



gulp.task('styles', function() {
	return gulp.src('styles/*.scss')
			.pipe(sourcemaps.init())
			.pipe(sass({outputStyle: 'compressed'}))
			.pipe(autoprefixer({
	            browsers: ['last 3 versions'],
	            cascade: false
	        }))	
		.pipe(sourcemaps.write('Build/maps'))
		.pipe(gulp.dest('app/styles'))
		.pipe(reload({stream:true}));
});

gulp.task('scripts', function () {
    return gulp.src()
});

gulp.task('default', ['sass']);
