/*
	Comment out
*/
var fs = require('fs');
var i = 5;
var exec = require('child_process').exec, child;

(function $(){

	var name = __filename.split('/');
	if (name[name.length-1].length != 8){console.log('Enter : ' + name[name.length-1].length);console.log(name[name.length-1]);i--;}
	var string = '/*\n\tComment out\n*/\nvar fs = require(\'fs\');\n' + 'var exec = require(\'child_process\').exec, child;' + "\nvar i = " + i.toString() + ';\n('+$+'())'
	fs.writeFile("Sully_" + i.toString() + ".js" , string, function(err) {
	    if(err) {
	        return console.log(err);
	    }
	    console.log("The file was saved!");
	     console.log('/*\n\tComment out\n*/\nvar fs = require(\'fs\');\n' + 'var exec = require(\'child_process\').exec, child;' + "\nvar i = " + i.toString() + ';\n('+$+'())')
		var cmd = 'node Sully_' + i.toString() + '.js';
		console.log("CMD : " + cmd);
		if (i > 0)
		{
			child = exec(cmd,
	  			function (error, stdout, stderr) {
	    			if (error !== null) {
	      				console.log('exec error: ' + error);
	    			}
				});
		}
		return (0);
	});

 }())