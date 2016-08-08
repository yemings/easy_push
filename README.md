# easy_push
 distributed push service,include cloud to client,client to cloud,client to client.

## usage
 $git clone git@github.com:yuyunliuhen/easy_push.git
 
 $cd easy_push && git submodule init && git submodule update  

 build mongo-c-driver cmake -DCMAKE_INSTALL_PREFIX=src/libbson/
 INCLUDE_DIRECTORIES(/Users/sophia/git/easy_push/dep/mongo-c-driver/src/libbson/src/bson)

 build mongo-cxx-driver: https://github.com/mongodb/mongo-cxx-driver/wiki/Quickstart-Guide-(New-Driver)
 cmake -DLIBBSON_DIR=../dep/mongo-c-driver/src/libbson/src/bson/ -DLIBMONGOC_DIR=../mongo-c-driver/src/mongoc/
 INCLUDE_DIRECTORIES(/Users/sophia/git/easy_push/dep/mongo-c-driver/src/libbson/src/bson /Users/sophia/git/easy_push/dep/mongo-c-driver/src/mongoc)
 SET(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb -fpermissive -L/Users/sophia/git/easy_push/dep/mongo-c-driver/src/libbson -L/Users/sophia/git/easy_push/dep/mongo-c-driver")



 reference:
 [Debian/Ubuntu手动编译安装MongoDB C++11驱动及驱动测试](http://www.cnblogs.com/pluse/p/5491300.html)
