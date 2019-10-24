#!/bin/bash


# Generate Makefile
touch Makefile
echo "CC = gcc" >> Makefile
echo "" >> Makefile
echo "main: $1.c" >> Makefile
printf "\t\$(CC) $1.c -o main" >> Makefile
echo "" >> Makefile
echo "clean:" >> Makefile
printf "\t-rm main Makefile\n" >> Makefile

# Compile the given .c file
make > /dev/null

# Execute the binary file
./main

# After Execution, delete all files, make this directory as clean as before ;)
make clean >/dev/null

