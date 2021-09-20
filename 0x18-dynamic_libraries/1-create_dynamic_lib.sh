#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC *.c -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
