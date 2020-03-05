#!/usr/bin/env bash

files=$(find -L $1 -name "*.c")

for file in $files; do
    if [ "$file" != "${1}/main.c" ]; then
        noExt=$(echo "$file" | cut -f 1 -d '.')
        echo Compiling $file
        gcc -o $noExt.o -c $file
    fi
done
