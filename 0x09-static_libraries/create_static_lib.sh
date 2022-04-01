#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rcs libmy.a *.o
