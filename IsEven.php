<!DOCTYPE html>
<html>
<head>
<title>IsEven.php</title>
</head>
<body> 

<form action="IsEven.php" method="post">
Enter a number: <input type="text" name="functionNumber">:<br / >
<input type="submit" value="submit" name="submit"><br / >
</form><br / >

<?php
$functionNumber = isset($_POST['functionNumber']) ? $_POST['functionNumber'] : null; //checks whether the variable exists 
$functionNumber = $functionNumber; //input 
if (is_numeric($functionNumber))
{
	$Answer = "";
	if( $functionNumber & 1 )
	{
	$Answer = "The value is (" . round($functionNumber) . ") is a number and it's odd."; //case 1 
	}
	else
	{
	$Answer = "The value is (" . round($functionNumber) . ") is a number and it's even."; //case 2
	}
}
else
{
$Answer = "($functionNumber) is not a number";
}
echo $Answer; //output answer
?>
</body>
</html>

