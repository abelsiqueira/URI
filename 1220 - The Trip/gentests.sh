#!/bin/bash

m=10
for i in $(seq $m)
do
  n=$[$RANDOM%10+1]
  echo $n
  for j in $(seq $n)
  do
    echo "scale=2; $[$RANDOM%10000+1]/100" | bc
  done
done
echo "0"
