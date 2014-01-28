#!/bin/bash
for test in $(ls *.in | sed 's/.in//g')
do
  echo -e "\033[32m Rodando teste $test\033[31m"
  ./main < $test.in > $test.out
  diff -s $test.sol $test.out
done
echo -e "\033[34m End of testing\033[0m"
