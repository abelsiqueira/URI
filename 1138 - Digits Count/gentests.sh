#!/bin/bash

for i in $(seq 10)
do
  start=$[$RANDOM%100000+1]
  end=$[$start+$RANDOM%100000+1]
  echo "$start $end"
done
echo "0 0"
