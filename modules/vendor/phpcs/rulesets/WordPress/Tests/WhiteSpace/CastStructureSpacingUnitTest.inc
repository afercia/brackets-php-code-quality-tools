<?php

$array1 =(array)$array; // Bad.
$array2 = (array) $array; // Ok.

$bool1 =(bool)$bool; // Bad.
$bool2 = (bool) $bool; // Ok.

$int1 =(int)$int; // Bad.
$int2 = (int) $int; // Ok.

$obj1 =( object )$object; // Bad; n.b. spacing within the cast is dealt with by an upstream sniff.
$obj2 = (object) $object; // Ok.

$str1 =(string)$string; // Bad.
$str2 = (string) $string; // Ok.

$unset1 =( unset)$unset; // Bad; n.b. spacing within the cast is dealt with by an upstream sniff.
$unset2 = (unset) $unset; // Ok.

$float1 =(float )$float; // Bad; n.b. spacing within the cast is dealt with by an upstream sniff.
$float2 = (float) $float; // Ok.
