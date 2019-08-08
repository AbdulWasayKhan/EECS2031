echo -n "enter a number: "
read num
if test $num -lt 0
then
echo "negative"
elif [ $num -eq 0 ]
then
echo "zero"
else
echo positive
fi
