<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d %d",$n,$k,$q);
$a_temp = fgets($handle);
$a = explode(" ",$a_temp);
array_walk($a,'intval');

$k = $k % $n;

for($a0 = 0; $a0 < $q; $a0++){
    fscanf($handle,"%d",$m);
    if($m - $k < 0){
        $idx = $n + ($m - $k);
    }else{
        $idx = $m - $k;
    }
    //$idx = (count($a) + $m - $k) % count($a);    
    echo (int)(trim($a[$idx]))."\n"; //'m: '. $m .', idx: '.$idx.', '.

}

?>