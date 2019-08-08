#Shell script Version
sum=`expr $1 + $2`
echo "sum is: $sum"
echo the exit code is: $?

#Bash Version

sum=$(($1 + $2))
echo "sum is: $sum"
echo the exit code for bash version sum is: $?
 
