<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <link rel="stylesheet" href="style.css">
        <title>Calculator</title>
    </head>
    <body>
        <div class="d1">
            <form method="post">
                <label for="operation">Choose an operation.</label>
                <br>
                <select name="Operation">
                    <option value="sum">Sum</option>
                    <option value="multiply">Multiply</option>
                    <option value="divide">Divide</option>
                    <option value="subtraction">Subtraction</option>
                    <option value="factorial">Factorial</option>
                    <option value="modulo">Modulo</option>
                    <option value="square_root">Square Root</option>
                </select>
                <br>
                <button type="submit" name="choose">Apply</button>
            </form>
            <?php 
                if(isset($_POST["choose"]))
                {
                    textboxes();
                }
                function textboxes()
                {
                    $operation = $_POST["Operation"];
                    echo '<form method="post">';
                    echo '<input type="hidden" name="Operation_Hidden" value='.$operation.'>';
                    if($operation == "sum" || $operation == "multiply" || $operation == "divide" || $operation == "subtraction" || $operation == "modulo")
                    {
                        echo 'A = <input type="text" name="num1"> B = <input type="text" name="num2"><br>';
                    }
                    else
                    {
                        echo 'A = <input type="text" name="num0"><br>';
                    }
                    echo '<button type="submit" name="calc">Calculate</button>';
                    echo '</form>';
                }
            ?>
            <?php
            if(isset($_POST["calc"]))
            {
                choosen($_POST["Operation_Hidden"]);
            }
            function choosen($choosenstr)
            {
                switch($choosenstr)
                {
                    case "sum":
                        {
                            if($_SERVER["REQUEST_METHOD"] == "POST")
                            {
                                if(empty($_POST["num1"]) || empty($_POST["num2"]))
                                {
                                    echo "[ERROR] Can't get numbers from textboxes!";
                                }
                                elseif(!is_numeric($_POST["num1"]) || !is_numeric($_POST["num2"]))
                                {
                                    echo "[ERROR] Write valid numbers!";
                                }
                                else
                                {
                                    sum();
                                }
                            }                            
                        } break;
                    case "multiply":
                        {
                            if($_SERVER["REQUEST_METHOD"] == "POST")
                            {
                                if(empty($_POST["num1"]) || empty($_POST["num2"]))
                                {
                                    echo "[ERROR] Can't get numbers from textboxes!";
                                }
                                elseif(!is_numeric($_POST["num1"]) || !is_numeric($_POST["num2"]))
                                {
                                    echo "[ERROR] Write valid numbers!";
                                }
                                else
                                {
                                    multiply();
                                }
                            }
                        } break;
                    case "divide":
                        {
                            if($_SERVER["REQUEST_METHOD"] == "POST")
                            {
                                if(empty($_POST["num1"]) || empty($_POST["num2"]))
                                {
                                    echo "[ERROR] Can't get numbers from textboxes!";
                                }
                                elseif(!is_numeric($_POST["num1"]) || !is_numeric($_POST["num2"]))
                                {
                                    echo "[ERROR] Write valid numbers!";
                                }
                                else
                                {
                                    divide();
                                }
                            }                            
                        } break;
                    case "subtraction":
                        {
                            if($_SERVER["REQUEST_METHOD"] == "POST")
                            {
                                if(empty($_POST["num1"]) || empty($_POST["num2"]))
                                {
                                    echo "[ERROR] Can't get numbers from textboxes!";
                                }
                                elseif(!is_numeric($_POST["num1"]) || !is_numeric($_POST["num2"]))
                                {
                                    echo "[ERROR] Write valid numbers!";
                                }
                                else
                                {
                                    subtraction();
                                }
                            }
                        } break;
                    case "factorial":
                        {
                            if($_SERVER["REQUEST_METHOD"] == "POST")
                            {
                                if(empty($_POST["num0"]))
                                {
                                    echo "[ERROR] Can't get numbers from textboxes!";
                                }
                                elseif(!is_numeric($_POST["num0"]))
                                {
                                    echo "[ERROR] Write valid numbers!";
                                }
                                else
                                {
                                    factorial();
                                }
                            }                            
                        } break;
                    case "modulo":
                        {
                            if($_SERVER["REQUEST_METHOD"] == "POST")
                            {
                                if(empty($_POST["num1"]) || empty($_POST["num2"]))
                                {
                                    echo "[ERROR] Can't get numbers from textboxes!";
                                }
                                elseif(!is_numeric($_POST["num1"]) || !is_numeric($_POST["num2"]))
                                {
                                    echo "[ERROR] Write valid numbers!";
                                }
                                else
                                {
                                    modulo();
                                }
                            }    
                        } break;
                    case "square_root":
                        {
                            if($_SERVER["REQUEST_METHOD"] == "POST")
                            {
                                if(empty($_POST["num0"]))
                                {
                                    echo "[ERROR] Can't get numbers from textboxes!";
                                }
                                elseif(!is_numeric($_POST["num0"]))
                                {
                                    echo "[ERROR] Write valid numbers!";
                                }
                                else
                                {
                                    square_root();
                                }
                            }
                        } break;
                }
            }
            function sum()
            {
                $a = $_POST["num1"];
                $b = $_POST["num2"];
                $c = $a + $b;
                echo "Sum of A = ".$a." and B = ".$b." is equal: ".$c;
            }
            function multiply()
            {
                $a = $_POST["num1"];
                $b = $_POST["num2"];
                $c = $a * $b;
                echo "Multiplication of A = ".$a." by B = ".$b." is equal: ".$c;
            }
            function divide()
            {
                $a = $_POST["num1"];
                $b = $_POST["num2"];
                if($b == 0)
                {
                    echo "[ERROR]Tried to divide by 0. Changing B = ".$b." to 1<br>";
                    $b = 1;
                }
                $c = $a / $b;
                echo "Division of A = ".$a." by B = ".$b." is equal: ".$c;
            }
            function subtraction()
            {
                $a = $_POST["num1"];
                $b = $_POST["num2"];
                $c = $a - $b;
                echo "Subtraction of A = ".$a." and B = ".$b." is equal: ".$c;
            }
            function factorial()
            {
                $a = $_POST["num0"];
                $b = 1;
                for ($i = 1; $i <= $a;) 
                {
                    $b = $b * $i;
                    $i++;
                }
                echo "Factorial of A = ".$a." is equal: ".$b;
            }
            function modulo()
            {
                $a = $_POST["num1"];
                $b = $_POST["num2"];
                if($b == 0)
                {
                    echo "[ERROR]Tried to divide by 0. Changing B = ".$b." to 1<br>";
                    $b = 1;
                }
                $c = $a % $b;
                echo "Rest on A = ".$a." divided by B = ".$b." is equal: ".$c;
            }
            function square_root()
            {
                $a = $_POST["num0"];
                $b = sqrt($a);
                echo "Square Root of A = ".$a." is equal: ".$b;
            }
            ?>
        </div>
    </body>
</html>