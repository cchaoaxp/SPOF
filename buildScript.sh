#!/bin/bash

echo "Executing $0"
echo "hostname is $HOSTNAME"

if [ $HOSTNAME != "localhost.localdomain" ]; then
   echo "No match"
   exit 1
fi

BUILD_DIR=QtBuild
QMAKE=/opt/Qt/5.15.0/gcc_64/bin/qmake
PROJECT_DIR=../data-entry

if [[ ! -d "$BUILD_DIR" ]]; then
   mkdir -m775 $BUILD_DIR
#   cd $BUILD_DIR
#else
#   cd $BUILD_DIR
#   rm -rf *
fi

cd $BUILD_DIR
$QMAKE $PROJECT_DIR
make

echo "Ending Executing $0"

