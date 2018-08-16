#!/bin/sh
#ask about name

echo "whats your name?"
read NAME
echo "your name is $NAME"
mkdir $NAME
cd $NAME
touch $NAME.cpp



