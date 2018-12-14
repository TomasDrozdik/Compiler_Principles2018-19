#!/bin/sh

#########################################################################
# USAGE:                                                                #
# ./compare.sh [-h <number>] [-a] [-r]                                  #
#                                                                       #
# -h 3 => sets homework id                                              #
# -a => includes array tests                                            #
# -r => includes record tests                                           #
#                                                                       #
# EXAMPLE:                                                              #
# ./compare.sh -h 3 -a => compares all tests from the homework number 3 #
#                      including all array tests                        #
# NOTE:                                                                 #
# Script has to be in 'mlaskal' directory!                              #
#########################################################################

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

array=false
record=false

while getopts arh: opt; do
    case $opt in
        a) array=true;;
        h) homework=$OPTARG;;
        r) record=true;;
        *) echo "Invalid argument";;
    esac
done
shift $(($OPTIND - 1))

path=./build.gcc
prefix=du$homework-test

cd $path
tests=$(ls $prefix*[^ar].out)

if [ "$array" = true ]; then
    tests=$tests' '$(ls ${prefix}*a.out)
fi
if [ "$record" = true ]; then
    tests=$tests' '$(ls ${prefix}*r.out)
fi

cd ..

for t in $tests; do
    d=$(diff $path/$t public-tests/$t)
    if [ "$d" = "" ]; then
        echo $GREEN$t$NC
    else 
        echo $RED$t$NC
        diff $path/$t public-tests/$t
    fi
done
