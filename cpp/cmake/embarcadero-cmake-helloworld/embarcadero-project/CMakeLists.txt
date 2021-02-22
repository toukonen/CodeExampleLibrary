cmake_minimum_required(VERSION 3.9)

set(CMAKE_C_STANDARS 09)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENT_CODE ON)

set(This EmbarcaderoApp)

project (EmbarcaderoAppProject)

include_directories(${HardwareToolsProject_INCLUDE_DIRS})

set_embt_target(VCL)

add_executable (${This} WIN32 main.cpp embarcadero-cmake-helloworld.cpp embarcadero-cmake-helloworld.res )
install(TARGETS ${This}
            RUNTIME DESTINATION bin
            LIBRARY DESTINATION lib
            ARCHIVE DESTINATION lib/static
)

target_link_libraries(${This} HardwareTools)


