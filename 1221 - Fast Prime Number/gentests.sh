#!/bin/bash
n=200
echo $n
for i in $(seq $n)
do
  echo $[2000*($RANDOM%25000+25000)-1]
done
