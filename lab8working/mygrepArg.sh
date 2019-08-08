#! /bin/sh
if test $# -lt 2 
then
  echo " Error! Usage: $0 filename pattern" 
elif [ ! -f $1 ] 
then
  echo " Error! \"$1\" is not an exsiting file" 
else
  echo there are $# command line arguments: $@ or $*
  echo Pattern \"$2\" was not found in file \"$1\"
  grep -w $2 $1
                  
fi
