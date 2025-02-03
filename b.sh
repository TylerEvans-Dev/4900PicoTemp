#!/bin/bash
set -e #exits upon a bad comand

cmake -B build -S .
cd build
make
echo "Generated files complete"
cd ..

#This is the copy and paste command of the uf2 file
ls
echo "the file path is above"

UF2_FILE="build/robo.uf2"

P_LOC="~../../mnt/e/"

if [ -d "$P_LOC" ]; then
	echo "pico is detected at $P_LOC"

else
	echo "the pico is not present"
	exit 1

fi
