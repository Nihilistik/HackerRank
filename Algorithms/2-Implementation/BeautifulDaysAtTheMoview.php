<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
$values = explode(' ',  fgets($_fp));
array_walk($values, 'intval');
$i = $values[0];
$j = $values[1];
$k = $values[2];
$counter = 0;
while($i < $j){
    $x = $i;
    $rev = strrev((String) $x);
    if( (abs( $x - (int)$rev) % $k == 0 ) ){
        $counter++;
    }

    $i++;
}
echo $counter;