<!DOCTYPE html>
<!--q7.22: encrpyt. -->
<html>
<head>
<meta charset = "utf-8">
<title>Encryption</title>
<script type = "text/javascript">

var NumberA;      				//1k place
var numberB;				// 100s place
var numberC;				//10s place
var numberD;				//1s place
var inputString;

//user prompt
inputString = window.prompt ("Enter your 4 digits: ",  "1234" ) ;

numberA = ( parseInt ( inputString / 1000 ) + 7 ) % 10;

numberB = ( parseInt ( inputString % 1000 / 100 ) +7 ) % 10;

numberC = ( parseInt ( inputString % 1000 % 100 / 10 ) + 7 ) % 10; 

numberD = ( parseInt ( inputString % 1000 % 100 % 10 ) + 7 ) % 10;

document.writeln( "<h1>Number is " + inputString + " encryption as " + numberA + numberB + numberC + numberD + ".</h1>" );

</script>
</head><body></body>
</html>

