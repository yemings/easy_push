#!/bin/bash
SYSTEM=`uname -a | awk '{print $1}'`
LINUX='linux'
MACX='Darwin'
if [ $SYSTEM == $MACX ];then
	export DYLD_LIBRARY_PATH=dep/protobuf/src/.libs/
elif [ "$SYSTEM" == "$LINUX" ];then
	export LD_LIBRARY_PATH=dep/protobuf/src/.libs/
fi
dep/protobuf/src/.libs/protoc -I./ --cpp_out=./ ./proto/transfer.proto
dep/protobuf/src/.libs/protoc -I./ --cpp_out=./ ./proto/login.proto
dep/protobuf/src/.libs/protoc -I./ --cpp_out=./ ./proto/common.proto
