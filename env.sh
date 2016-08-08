#!/bin/bash
SYSTEM=`uname -a | awk '{print $1}'` 
LINUX='linux'
MACX='Darwin'
if [ $SYSTEM == $MACX ];then
	if [ `env | grep -c "LD_LIBRARY_PATH"` -ge 1 ]; then
		LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib:./dep/protobuf/src/.libs/:./dep/jansson/lib; export LD_LIBRARY_PATH
	else 
		LD_LIBRARY_PATH=/usr/local/lib:./dep/protobuf/src/.libs:./dep/jansson/lib; export LD_LIBRARY_PATH
	fi
elif [ "$SYSTEM" == "$LINUX" ];then
	if [ `env | grep -c "DYLD_LIBRARY_PATH"` -ge 1 ]; then
		DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:/usr/local/lib:./dep/protobuf/src/.libs/:./dep/jansson/lib; export DYLD_LIBRARY_PATH
	else 
		DYLD_LIBRARY_PATH=/usr/local/lib:./dep/protobuf/src/.libs:./dep/jansson/lib; export DYLD_LIBRARY_PATH
	fi
fi
