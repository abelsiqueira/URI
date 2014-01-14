#!/bin/bash

for i in $(seq 50)
do
  n=$[$RANDOM%49+2]
  echo $n
  for i in $(seq $n)
  do
    echo -n "$[$RANDOM%1001-500] "
  done
  echo ""
done
echo "0"
