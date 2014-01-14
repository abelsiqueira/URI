#!/bin/bash

for p in $(seq 10)
do
  n1=$[$RANDOM%20+5]
  n2=$[$RANDOM%20+5]
  echo "$n1 $n2"
  c=0
  for i in $(seq $n1)
  do
    c=$[$RANDOM%3+$c]
    echo -n "$c "
  done
  echo ""
  c=0
  for i in $(seq $n2)
  do
    c=$[$RANDOM%3+$c]
    echo -n "$c "
  done
  echo ""
done
echo "0 0"
