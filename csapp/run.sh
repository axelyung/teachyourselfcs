#!/bin/bash

echo "compiling and running $1..."
echo

gcc $1.c
./a.out
rm ./a.out

echo
echo "end"
