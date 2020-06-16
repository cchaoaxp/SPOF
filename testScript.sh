#!/bin/bash

echo "Executing $0"
echo "hostname is $HOSTNAME"

if [ $HOSTNAME != "localhost.localdomain" ]; then
   echo "No match"
   exit 1
fi
TEST_DIR=QtBuild/UpdateTimeAppMain/
QMAKE=/opt/Qt/5.15.0/gcc_64/bin/qmake
PROJECT_DIR=../data-entry

cd $TEST_DIR
./UpdateTimeAppMain -wait -o UpdateTimeTest.xml -xml

echo "Ending Executing $0"

