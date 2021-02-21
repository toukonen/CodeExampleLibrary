cmake_minimum_required(VERSION 3.9)

set(CMAKE_C_STANDARS 09)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENT_CODE ON)

project (EmbarcaderoCmakeHelloWorld)

add_subdirectory(embarcadero-project)
add_subdirectory(standard-cpp-library)