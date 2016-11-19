<?php
$_fp = fopen("php://stdin", "r");

$values = explode(' ',  fgets($_fp));
array_walk($values, 'intval');
sort($values);
$sum = array_sum($values);
echo  ($sum - $values[count($values) - 1]) ." ". ($sum - $values[0]);