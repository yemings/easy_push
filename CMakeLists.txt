PROJECT(easy_push)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# build system
if(UNIX)
	IF(APPLE)
		MESSAGE(APPLE)
	ELSE()
		MESSAGE(UNIX)
	ENDIF(APPLE)
ELSE(WIN32)
	MESSAGE(WIN32)
ENDIF(UNIX)

AUX_SOURCE_DIRECTORY( ./dep/easy/src/base EASY_SRC_LIST)
IF(UNIX)
	IF(APPLE)
		SET(TINYNET_SRC_LIST ./dep/tinynet/socket_ex.cc ./dep/tinynet/reactor.cc ./dep/tinynet/reactor_impl_select.cc 
		./dep/tinynet/event_handle.cc ./dep/tinynet/event_handle_srv.cc  ./dep/tinynet/server_protobuf_impl.cc 
		./dep/tinynet/event_handle_cli.cc ./dep/tinynet/client_protobuf_impl.cc)
	ELSE()
		SET(TINYNET_SRC_LIST ./dep/tinynet/socket_ex.cc ./dep/tinynet/reactor.cc ./dep/tinynet/reactor_impl_select.cc 
		./dep/tinynet/reactor_impl_poll.cc ./dep/tinynet/reactor_impl_epoll.cc
		./dep/tinynet/event_handle.cc ./dep/tinynet/event_handle_srv.cc  ./dep/tinynet/server_protobuf_impl.cc 
		./dep/tinynet/event_handle_cli.cc ./dep/tinynet/client_protobuf_impl.cc)
	ENDIF(APPLE)
ELSE(WIN32)
	SET(TINYNET_SRC_LIST ./dep/tinynet/socket_ex.h ./dep/tinynet/socket_ex.cc ./dep/tinynet/reactor.h ./dep/tinynet/reactor.cc ./dep/tinynet/reactor_impl_select.h ./dep/tinynet/reactor_impl_select.cc ./dep/tinynet/reactor_impl_iocp.h ./dep/tinynet/reactor_impl_iocp.cc
	./dep/tinynet/event_handle.h ./dep/tinynet/event_handle.cc ./dep/tinynet/event_handle_srv.h ./dep/tinynet/event_handle_srv.cc ./dep/tinynet/server_impl.h ./dep/tinynet/server_protobuf_impl.cc 
	./dep/tinynet/event_handle_cli.h ./dep/tinynet/event_handle_cli.cc ./dep/tinynet/client_protobuf_impl.h ./dep/tinynet/client_protobuf_impl.cc)
ENDIF(UNIX)

#AUX_SOURCE_DIRECTORY( ./proto PROTO_SRC_LIST)
INCLUDE_DIRECTORIES( . ./dep/easy/src/base ./dep/tinynet ./dep/protobuf/src ./proto ./dep/mongo-c-driver/src/mongoc ./dep/mongo-c-driver/src/libbson/src/bson)

IF(UNIX)
	IF(APPLE)
		ADD_DEFINITIONS(-D__HAVE_SELECT -D__MACX -D__DEBUG)
	ELSE()
		ADD_DEFINITIONS(-D__HAVE_EPOLL -D__LINUX -D__DEBUG)
	ENDIF(APPLE)
	SET(CMAKE_CXX_FLAGS "-Wl,--no-as-needed -std=c++11 -pthread") 
	SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -pg -ggdb")
	SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
ELSE(WIN32)
	ADD_DEFINITIONS(-D__HAVE_SELECT -D__WIN32 -DWIN32 -D__DEBUG)
ENDIF(UNIX)

ADD_LIBRARY(easy STATIC ${EASY_SRC_LIST})
ADD_LIBRARY(tinynet STATIC ${TINYNET_SRC_LIST})
#ADD_LIBRARY(proto STATIC ${PROTO_SRC_LIST})
SET_TARGET_PROPERTIES(easy PROPERTIES OUTPUT_NAME "easy")
SET_TARGET_PROPERTIES(tinynet PROPERTIES OUTPUT_NAME "tinynet")
#SET_TARGET_PROPERTIES(proto PROPERTIES OUTPUT_NAME "proto")
SET(LIBRARY_OUTPUT_PATH lib)
#ADD_SUBDIRECTORY( gate )
#ADD_SUBDIRECTORY( logic )
#ADD_SUBDIRECTORY(test_client)

