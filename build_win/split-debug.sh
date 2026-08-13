#!/bin/sh
set -e
if [ $# -ne 3 ];
    then echo "usage: $0 <input> <stripped-binary> <debug-binary>"
fi

x86_64-w64-mingw32-objcopy --enable-deterministic-archives -p --only-keep-debug $1 $3
x86_64-w64-mingw32-objcopy --enable-deterministic-archives -p --strip-debug $1 $2
x86_64-w64-mingw32-strip --enable-deterministic-archives -p -s $2
x86_64-w64-mingw32-objcopy --enable-deterministic-archives -p --add-gnu-debuglink=$3 $2
