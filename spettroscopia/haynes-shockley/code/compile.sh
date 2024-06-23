#!/bin/bash

g++ -Wall $(root-config --cflags --libs) *.cc -o main_exe

./main_exe

