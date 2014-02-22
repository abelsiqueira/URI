#!/bin/bash
problem=$1
[[ "$#" -eq 1 ]] || { echo "1 argument required"; exit 1;}
mkdir "$problem"
touch "$problem"/STATUS
echo $problem >> "$problem"/STATUS
echo "---------------------------" >> "$problem"/STATUS
cp templates/* "$problem"
cd "$problem"

