#!/bin/sh

set -xe
mkdir -p exec
gcc -o exec/main main.c -Wall -Wextra -ggdb
