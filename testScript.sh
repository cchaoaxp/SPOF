#!/bin/bash

Xvfb :0 >& /dev/null &
export DISPLAY=:0
echo "Executing $0"
echo "hostname is $HOSTNAME"
echo "current path is: $PWD"

if [ $HOSTNAME != "localhost.localdomain" ]; then
   echo "No match"
   exit 1
fi
TEST_DIR=QtBuild/tests/testUpdateTime/

cd $TEST_DIR
echo "before Executing"
ls -la

./testUpdateTime -wait -o UpdateTimeTest.xml -xml

echo "After Executing"
ls -la

echo "Ending Executing $0"

