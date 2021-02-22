cmake_minimum_required( VERSION 3.5 )
#include(C:/Work/Developing/Training/vcpkg/scripts/buildsystems/vcpkg.cmake)
include(${vcpkg_install_path}/vcpkg/scripts/buildsystems/vcpkg.cmake)

project( grpc_example )

find_package(gRPC CONFIG REQUIRED)

find_package(Protobuf CONFIG REQUIRED)

add_executable(server src/server.cpp proto/helloworld.grpc.pb.cc proto/helloworld.pb.cc)

add_executable(client src/client.cpp proto/helloworld.grpc.pb.cc proto/helloworld.pb.cc)

target_link_libraries(server PRIVATE 
    gRPC::gpr 
    gRPC::grpc 
    gRPC::grpc++ 
    gRPC::grpc++_alts 
    gRPC::grpc++_reflection 
    protobuf::libprotoc 
    protobuf::libprotobuf 
    protobuf::libprotobuf-lite)

target_link_libraries(client PRIVATE 
    gRPC::gpr 
    gRPC::grpc 
    gRPC::grpc++ 
    gRPC::grpc++_alts 
    gRPC::grpc++_reflection 
    protobuf::libprotoc 
    protobuf::libprotobuf 
    protobuf::libprotobuf-lite)

include_directories(../proto)