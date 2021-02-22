# grpc server and client examples

## Dependenciens

### vcpkg
  * grpc
  * protocol buffer



## Generate ping pong c++ files from proto

### 

´´´sh
protoc --proto_path=../../protos/. --cpp_out=. ping_pong.proto --grpc_out=. --plugin=protoc-gen-grpc="C:\Work\Developing\Training\vcpkg\packages\grpc_x64-windows\tools\grpc\grpc_cpp_plugin.exe" ping_pong.proto
´´´sh

- Folow the orders but read first notes in under 
 * https://sanoj.in/2020/05/07/working-with-grpc-in-windows.html

Notes!

# Replace -I -> --proto_path in protoc command
  * exp. protoc -I=. --cpp_out=. helloworld.proto -> protoc --proto_path=. --cpp_out=. helloworld.proto

  * protoc --proto_path=. --grpc_out=. --plugin=protoc-gen-grpc="C:\Work\Developing\Training\vcpkg\packages\grpc_x64-windows\tools\grpc\grpc_cpp_plugin.exe" helloworld.proto

# Change vs 2015 to vs 2019
- Go to project\build folder 
cmake -G "Visual Studio 16 2019" -A x64 ..\ -DCMAKE_TOOLCHAIN_FILE=C:/Work/Developing/Training/vcpkg/scripts/buildsystems/vcpkg.cmake


# 
- Follow instruction https://github.com/grpc/grpc-web/tree/master/packages/grpc-web

- Note. In step You can download the protoc-gen-grpc-web protoc plugin from our Github release page.
  * download protoc-gen-grpc-web-x.x.x-windows-x86_64.exe file. Rename it to "protoc-gen-grpc-web.exe" and make sure it is in PATH 


