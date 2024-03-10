cmake_minimum_required(VERSION 3.0)
project(My32BitProject)

# 设置32位编译器标志
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -m32")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -m32")
set(CMAKE_BUILD_TYPE "Debug")
# 设置32位链接器标志
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -m32")
set(OPENSSL_ROOT_DIR "/usr/local/openssl-1.1.1l-32bit")


find_package(OpenSSL REQUIRED)

#添加对gdb的支持
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


# 添加你的源代码文件
add_executable(app sales.cpp 9test.cpp)

target_include_directories(app PRIVATE ${OPENSSL_INCLUDE_DIR})

target_link_libraries(app PRIVATE ${OPENSSL_LIBRARIES})

