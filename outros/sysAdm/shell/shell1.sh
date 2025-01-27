#!/bin/bash

echo naruto vs goku

num1=1 
num2=9

echo "$num1 + $num2"

mensagem=$1
echo "$mensagem"


if [ $# -eq 1 ]
then
	mensagem=$1
	echo "men $mensagem!"
else
	echo "Please enter only one argument."
fi
echo "Number of arguments: $#."

echo "mais $@!"

# O comando shift removerá o primeiro elemento do arranjo, de modo que:
shift
for mensagem in $@
do

# echo -n "Hello $mensagem!"
echo $mensagem | grep "^[A-Za-z]*$"
if [ $# -eq 1 ] 
then
	echo "Error com grep"
else
	echo "nova men $mensagem"
fi
done