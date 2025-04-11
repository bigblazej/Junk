<?php
include 'index.php';
?>
<html>
    <body>
        <?php 
        $numstring = array( $_POST["numstring1"], $_POST["numstring2"], $_POST["numstring3"], $_POST["numstring4"], $_POST["numstring5"], $_POST["numstring6"], $_POST["numstring7"], $_POST["numstring8"], $_POST["numstring9"], $_POST["numstring10"]);        
        echo "Average of numstringbers: ";
        for($i = 0; $i <= 9; $i++)
        {
            echo $numstring[$i];
            echo ", ";
        }
        ?>
        <br>
        <?php
        $divide = 0.0;
        for($i = 0; $i <= 9;)
        {
            if(is_numeric($numstring[$i]))
            {
                $divide++;
            }
            else
            {
                echo "$i Number is not numeric! Skipping.";
            }
            $i++;
        }
        $num1 = doubleval($numstring[0]);
        $num2 = doubleval($numstring[1]);
        $num3 = doubleval($numstring[2]);
        $num4 = doubleval($numstring[3]);
        $num5 = doubleval($numstring[4]);
        $num6 = doubleval($numstring[5]);
        $num7 = doubleval($numstring[6]);
        $num8 = doubleval($numstring[7]);
        $num9 = doubleval($numstring[8]);
        $num10 = doubleval($numstring[9]);
        ?>
        <br>
        <?php
        $result = 0.0;
        if($divide != 0)
        {
            $result = ($num1 + $num2 + $num3 + $num4 + $num5 + $num6 + $num7 + $num8 + $num9 + $num10) / $divide;
            echo "Is equal: $result";
        }
        else
        {
            echo "Error";
        }
        ?>
    </body>
</html>