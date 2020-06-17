#!/bin/bash

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
chmod +x testUpdateTime
ls -la

./testUpdateTime -wait -o UpdateTimeTest.xml -xml

echo "After Executing"
ls -la

echo "Ending Executing $0"

