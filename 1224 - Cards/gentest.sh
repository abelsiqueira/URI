#!/bin/bash

for i in $(seq 10)
do
  n=10
  echo $n
  for j in $(seq $n)
  do
    echo -n "$[$RANDOM%101-50] "
  done
  echo ""
done
