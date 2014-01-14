#!/bin/bash

n=$[$RANDOM%20+1]
echo $n
for i in $(seq $n)
do
  len=$[($RANDOM%10+1)*2]
  cat /dev/urandom | tr -dc [:alpha:] | head -c $len
  m=$[$RANDOM%4]
  for i in $(seq $m)
  do
    echo -n " "
    len=$[($RANDOM%10+1)*2]
    cat /dev/urandom | tr -dc [:alpha:] | head -c $len
  done
  echo ""
done
