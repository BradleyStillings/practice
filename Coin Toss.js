<html>


<head>
	
<title>Coin Toss</title>
	
	
<style type = "text/css">
	
         
table   { text-align: right }
         
body    { font-family: times,serif }
        		 
table td.center { text-align: center }

    
</style>
	
	
<script type = "text/javascript">
				
		
var heads = 0; // number of heads results
		
var tails = 0; // number of tails results
		
var total = 0; // total number of flips
			
		
function launch()
		
{
			
var result; // result of the flip
					
var status = document.getElementById( "status" );
			
var record = document.getElementById( "record" );
			
			
result = flip();
			
			
switch ( result )
			{
				
case true: 				
status.innerHTML = "Heads";
					
heads++;
					
total++;
										
break;
				
case false: 					
status.innerHTML = "Tails";
					
tails++;
					
total++;
										
break;
			
} 
			
			

			
record.innerHTML = "Results:"+ "Heads: " + heads + " Tails: " + tails + " Total Tosses: " + total;
			
		
} 		
		
		
function flip()
		
{
			
var Flip;

			
Flip = Math.floor( 1 + Math.random() * 2 );
			
			
if ( Flip == 1 )
				
return true;
			
else 
				
return false;
		
} 
</script>
	

</head>


<body>

	
<form action = "">
		
<table>
			
<tr>
				
<td class = "center"><h2>Coin Flip</h2></td>
			
</tr>
									
<tr>
<td class = "center">
<input type = "button" value = "launch"
				
onclick = "launch()" /></td></tr>
		
</table>
		
<div><br /></div>
		
<div id = "status" class = "black">
			
Click the launch button to toss the coin.
		
</div>
		
<div><br /></div>
		
<div id = "record">
			
Results: Heads: 0 Tails: 0 Total Tosses: 0
		
</form>

	
	
<p>
		
</p>
		
	

</body>


</html>

