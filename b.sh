#!/bin/bash
set -e #exits upon a bad comand

cmake -B build -S .
cd build
make 
echo "Generated files complete"
