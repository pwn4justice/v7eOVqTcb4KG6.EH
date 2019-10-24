#!/bin/bash


# Generate Makefile
touch Makefile
echo "CC = gcc" >> Makefile
#echo "flag = -Wall" >> Makefile		#open all warnings...
#echo "FLAG = -Wimplicit" >> Makefile		#open implicit warning...
#echo "FLAG = -Wno-implicit" >> Makefile	#close implicit warning...
echo "FLAG = -w" >> Makefile			#close all warning...
echo "" >> Makefile
echo "main: $1.c" >> Makefile
printf "\t\$(CC) \$(FLAG) $1.c -o main" >> Makefile
echo "" >> Makefile
echo "clean:" >> Makefile
printf "\t-rm main Makefile\n" >> Makefile

# Compile the given .c file
make > /dev/null

# Execute the binary file
./main

# After Execution, delete all files, make this directory as clean as before ;)
make clean >/dev/null

