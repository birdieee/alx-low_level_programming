#!/bin/bash
gcc -wall -wextra -pendant -c -fpic *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
