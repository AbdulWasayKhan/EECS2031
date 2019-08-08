#!/bin/bash
rm -f output.log
rm -f /usr/tmp/temp$$
rm -f hello.log
if [ -e hello.c ]; then
	gcc -ansi -pedantic hello.c -o hello 2>> /usr/tmp/temp$$
	if [ -s /usr/tmp/temp$$ ]; then
		echo "hello.c compilation errors" >> output.log; exit
	else
		echo "hello.c compiles successfully" >> output.log
	fi
else
	echo "hello.c does not exist" >> output.log
fi
if [ "$(hello)" == "Hello World" ]; then
	echo "Output correct" >> hello.log
else
	echo "Output mismatch" >> hello.log
fi