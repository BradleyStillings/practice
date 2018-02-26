<?php

$workHours = $_GET["hours"];
$averageWage = $_GET["wage"];

echo "The employee worked: $workHours <br>";
echo "The employee's rate: $averageWage<br>";

if ($workHours <= 40)
{
$pay = ($workHours * $averageWage);
echo "This is the employee's paycheck: $pay ";
}
if ($workHours > 40)
{
$pay = (($workHours * $averageWage) + ($workHours - 40) * $averageWage * 1.5);
echo "This is the employee's paycheck: $pay";

}

?>
</body>
</html>

