#!/bin/bash

echo "Enter the name of the c file:"
read file
echo ""

echo "Enter the name you want the output file to have:"
read output
echo ""

count=0

while [ $count ];
do
	vim $file
	gcc $file -o $output
	./$output
	rm $output
	echo "Looped $count times over $file. Press enter to loop or ctrl c to exit:"
	read continue
	let count=count+1
done
