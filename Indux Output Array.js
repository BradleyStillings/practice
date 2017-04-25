<DOCTYPE html>
<html>
<head>
<title>Input Output Array</title>
<script type = "text/javascript">

function pageRender()
{
var number; 
var numberList = []; 
var output = document.getElementById( "output" ); 
			
for ( var i = 0; i < 10; i++ )
{	
number = window.prompt( "Please enter a number between 10 and 100 (" + ( 10 - i ) + " Numbers left): ", "10" );
number = parseInt( number );
								
if ( !indexOf( numberList, number ) )
numberList[ numberList.length ] = number;
				
output.innerHTML = "You Entered These: " + numberList.join( " " );				
} 
} 		
function indexOf( theArray, key )
{
for ( var x = 0; x < theArray.length; x++ )
if ( theArray[ x ] == key )
return true;				
return false;
} 
				
</script>	
</head>
<body onload = "pageRender()">
<form action = "">
<div id = "output">You Entered These:</div>
</form>
<p>
</p>	
</body>
</html>

