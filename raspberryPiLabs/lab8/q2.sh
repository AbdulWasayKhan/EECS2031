#!/bin/bash
z=$((RANDOM%10+1))
i=1
while test $i -eq 1; do
	read a
	if test $a -eq $z; then
		echo Congratulations
		let i=0
	else
		echo "Thats not it"
	fi
done
