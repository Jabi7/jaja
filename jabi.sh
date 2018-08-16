#!/bin/sh
#ask about name
for i in 1 2 3 4 5
do
echo "whats your name?"
read NAME
echo "your name is $NAME"
mkdir $NAME
touch $NAME.cpp
mv $NAME.cpp $NAME
done

