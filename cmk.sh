#!/bin/bash

if [ "$1" = "" ]
then
 echo 'usage:cmk.sh <filename>'
 exit 1
fi

gcc $1 -o systop 2> error.log
