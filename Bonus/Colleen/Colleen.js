 /*
 	Comment out
 */
function ret_nothing(){return;}
(function main(){
 	/*
 		Comment in
 	*/
 	ret_nothing();
 	console.log('/*\n\tComment out\n*/\n' + 'function ret_nothing(){return;}\n' + '('+main+'())')}())