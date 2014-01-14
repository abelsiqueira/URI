#!/bin/bash

for i in $(seq 50)
do
  for j in $(seq 4)
  do
    echo -n "$[$RANDOM%8+1] "
  done
  echo ""
done
echo "0 0 0 0"
