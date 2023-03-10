#!/bin/bash
gcc -WAll -pedantic -Werror -Wetra -c *.c 
ar -rc liball.a *.o
randlib liball.a
