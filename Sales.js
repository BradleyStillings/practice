<!DOCTYPE>
<html>
<head>
<meta charset="utf-8">
<title>Employee Figures</title>
<style type="text/css"> 
table, table td   { padding: 8px }
</style>
<script type = "text/javascript">
var counters= [ 0, 0, 0, 0, 0, 0, 0, 0, 0 ];
        function salesEntry()
        {   
            var salary = 0;
var grossSales = parseInt( document.getElementById( "Field" ).value );
            {
                
            }
            salary = 200 + parseInt( ( .09 * grossSales ) );
            if ( salary >= 200 && salary <= 299 )
                ++counters[ 0 ];
            if ( salary >= 300 && salary <= 399 )
                ++counters[ 1 ];
            if ( salary >= 400 && salary <= 499 )
                ++counters[ 2 ];
            if ( salary >= 500 && salary <= 599 )
                ++counters[ 3 ];
            if ( salary >= 600 && salary <= 699 )
                ++counters[ 4 ];
            if ( salary >= 700 && salary <= 799 )
                ++counters[ 5 ];
            if ( salary >= 800 && salary <= 899 )
                ++counters[ 6 ];
            if ( salary >= 900 && salary <= 999 )
                ++counters[ 7 ];
            if ( salary >= 1000 )
                ++counters[ 8 ];
           resultsDisplay()
            document.getElementById( "Field" ).value = "0";
        }
        function resultsDisplay()
        {   
           var printoutTable = "<table border = \"1\">";
            printoutTable += "<tr><td colspan = \"2\" style = \"text-align: center\"><h1> Salary Report</h1></td></tr>";
            printoutTable += "<tr><td>Monetary Range</td><td>#of Employees</td></tr>";
            printoutTable += "<tr><td>$200-299</td><td>" + counters[ 0 ] + "</td></tr>";
            printoutTable += "<tr><td>$300-399</td><td>" + counters[ 1 ] + "</td></tr>";
            printoutTable += "<tr><td>$400-499</td><td>" + counters[ 2 ] + "</td></tr>";
            printoutTable += "<tr><td>$500-599</td><td>" + counters[ 3 ] + "</td></tr>";
            printoutTable += "<tr><td>$600-699</td><td>" + counters[ 4 ] + "</td></tr>";
            printoutTable += "<tr><td>$700-799</td><td>" + counters[ 5 ] + "</td></tr>";
            printoutTable += "<tr><td>$800-899</td><td>" + counters[ 6 ] + "</td></tr>";
            printoutTable += "<tr><td>$900-999</td><td>" + counters[ 7 ] + "</td></tr>";
            printoutTable += "<tr><td>$1000+</td><td>" + counters[ 8 ] + "</td></tr>";
            printoutTable += "</table>";
            document.getElementById( "salesPrintout" ).innerHTML = printoutTable;
        }
    </script>

</head>

<body>

    <form action = "">
        <table>
            <tr>
                <td colspan = "2" style = "text-align: center"><h2>Employee Gross Sales:</h2></td>
            </tr>
            <tr>
                <td>Gross Sales: </td>
                <td>$<input id = "Field" type = "text" />
                </td>
            </tr>
            <tr>
                <td />
                <td><input type = "button" value = "salesEntry"
                    onclick = "salesEntry()" />
                </td>
            </tr>
        </table>
        <div id = "salesPrintout">
            <table border = "2">
                <tr><td colspan = "2" style = "text-align: center"><h2> Salary  Report</h2></td></tr>
                <tr><td>Monetary Range</td><td># of Employees</td></tr>
                <tr><td>$200-299</td><td>0</td></tr>
                <tr><td>$300-399</td><td>0</td></tr>
                <tr><td>$400-499</td><td>0</td></tr>
                <tr><td>$500-599</td><td>0</td></tr>
                <tr><td>$600-699</td><td>0</td></tr>
                <tr><td>$700-799</td><td>0</td></tr>
                <tr><td>$800-899</td><td>0</td></tr>
                <tr><td>$900-999</td><td>0</td></tr>
                <tr><td>$1000+</td><td>0</td></tr>
</table>
</div></form>
<p>
</p>
</body>
</html>
