#! /bin/sh
echo -n "Please enter file to search: " 
read file 
echo -n "Please enter searech key: " 
read pattern 
grep -w $pattern $file
echo  the last exit value was $?
 
