#!/usr/bin/env bash

files=`find -L $1 -name "*.c"`
gcc -o $2 -g $files