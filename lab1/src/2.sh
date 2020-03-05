#!/bin/bash
A=0
#echo -n > numbers.txt
while [ $A -lt 5 ]
do
echo $RANDOM >> numbers.txt
let "A = A + 1"
done 