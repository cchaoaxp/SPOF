#!/bin/bash

echo "Executing $0"
echo "hostname is $HOSTNAME"
echo "current path is: $PWD"

if [ $HOSTNAME != "localhost.localdomain" ]; then
   echo "No match"
   exit 1
fi
TEST_DIR=QtBuild/UpdateTimeApp/UpdateTimeAppMain/

cd $TEST_DIR
echo "before Executing"
ls -la

./UpdateTimeAppMain -wait -o UpdateTimeTest.xml -xml

echo "After Executing"
ls -la

echo "Ending Executing $0"

