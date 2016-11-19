<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d %d %d",$x1,$v1,$x2,$v2);

$diff = $v2 - $v1;
if($x1 == $x2 || $diff < 0) {
    $n = (int)(($x1 - $x2) / $diff);
    if(($x1 + ($n * $v1)) == ($x2 + ($n * $v2))){
        echo "YES";
        die();
    }
}
echo "NO";
