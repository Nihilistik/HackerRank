<?php

$handle = fopen ("php://stdin","r");
$h_temp = fgets($handle);
$h = explode(" ",$h_temp);
array_walk($h,'intval');

fscanf($handle,"%s",$word);

$alphabet = explode(' ', "a b c d e f g h i j k l m n o p q r s t u v w x y z");

$word_length = strlen($word);
$max = 0;
for($x = 0; $x < $word_length; $x++){
    $k = array_search($word[$x], $alphabet);
    if($h[$k] > $max){
        $max = $h[$k];
    }
}

echo $max * $word_length;

?>