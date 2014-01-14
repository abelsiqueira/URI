#!/bin/bash

for i in $(seq 10)
do
  echo -n "$[$RANDOM%10] "
  nd=$[$RANDOM%100+1]
  for i in $(seq $nd)
  do
    echo -n $[$RANDOM%10]
  done
  echo ""
done
