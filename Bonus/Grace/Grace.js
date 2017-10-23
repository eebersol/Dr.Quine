/*
	Comment out
*/
var fs = require('fs');
(function $(){
	var string = '/*\n\tComment out\n*/\nvar fs = require(\'fs\');\n' + '('+$+'())'
	fs.writeFile("Grace_kid.js" , string, function(err) {
	    if(err) {
	        return console.log(err);
	    }
	    console.log("The file was saved!");
	});
 	console.log('/*\n\tComment out\n*/\n' + '('+$+'())')
 }())