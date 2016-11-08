<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d %d",$a0,$a1,$a2);
fscanf($handle,"%d %d %d",$b0,$b1,$b2);

$alice = array($a0, $a1, $a2);
$bob = array($b0, $b1, $b2);
$acum = array(0, 0);
for($x = 0, $len = count($alice); $x < $len; $x++){
    if($alice[$x] != $bob[$x]){
        if($alice[$x] > $bob[$x])
            $acum[0]++;
        else
            $acum[1]++;
    }
}

printf("%d %d", $acum[0], $acum[1]);


?>