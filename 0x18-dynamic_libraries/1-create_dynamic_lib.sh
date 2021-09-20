#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g -fPIC *.c -shared -o liball.so 
