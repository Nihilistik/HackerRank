<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d",$s,$t);  //House Limits
fscanf($handle,"%d %d",$a,$b);  //Apple and Orange Tree Positions
fscanf($handle,"%d %d",$m,$n);  //Number of falling fruits

$apple_temp = fgets($handle);
$apple = explode(" ",$apple_temp);
array_walk($apple,'intval');    //count($apple) -> $m

$orange_temp = fgets($handle);
$orange = explode(" ",$orange_temp);
array_walk($orange,'intval');   //count($orange) -> $n

$acum = 0;
foreach($apple as $ap){
    $pos = $a + $ap;
    if($pos >= $s && $pos <= $t)
        $acum++;

}
print $acum ."\r\n";
$acum = 0;
foreach($orange as $or){
    $pos = $b + $or;
    if($pos <= $t && $pos >= $s)
        $acum++;

}
print $acum."\r\n";

?>