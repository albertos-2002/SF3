#!/usr/bin/bash

rm -vi main_exe

g++ -Wall $(root-config --cflags --libs) *.cc -o main_exe

./main_exe

