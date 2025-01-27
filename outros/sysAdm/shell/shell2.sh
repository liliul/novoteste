#!/bin/bash

if [ $# -lt 1 ]
then
	echo "This script requires at least 1 argument."
exit 1
fi

echo $1 | grep "^[A-Z]*$" > /dev/null

if [ $? -ne 0 ]
then
	echo "no cake for you!"
exit 2
fi
echo "here's your cake!"
exit 0