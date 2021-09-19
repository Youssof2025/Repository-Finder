#!/bin/sh

cd ..
gcc main.c -o homescreen
mv homescreen tools/
cd tools
./homescreen
rm homescreen
