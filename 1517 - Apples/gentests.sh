#!/bin/bash

n_tests=5
for i in $(seq $n_tests)
do
  N=20
  M=20
  #n_apples=$[$RANDOM%10+5]
  n_apples=1000
  t=1
  echo "$N $M $n_apples"
  for k in $(seq $n_apples)
  do
    x=$[$RANDOM%$N+1]
    y=$[$RANDOM%$M+1]
    t=$[$t+$RANDOM%3+1]
    echo "$x $y $t"
  done
  x=$[$RANDOM%$N+1]
  y=$[$RANDOM%$M+1]
  echo "$x $y"
done
echo "0 0 0"
