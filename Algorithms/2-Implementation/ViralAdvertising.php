<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $days);

$people = 5;
$acum = 0;

do{
    $people = floor($people / 2);
    $acum += $people;

    //The point is add people AFTER save the current number of
    //likes, in order to simulate next day
    $people *= 3;
}while(--$days > 0);
echo $acum;