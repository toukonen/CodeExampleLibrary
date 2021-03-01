if(CMAKE_CXX_COMPILER_ID STREQUAL "Embarcadero") 

    set(This EmbarcaderoApp)

    project (EmbarcaderoAppProject)

    include_directories(${HardwareToolsProject_INCLUDE_DIRS})

    set_embt_target(VCL DynamicRuntime)

    add_executable (${This} WIN32 main.cpp embarcadero-cmake-helloworld.cpp embarcadero-cmake-helloworld.res )
    install(TARGETS ${This}
                RUNTIME DESTINATION bin
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib/static
                RESOURCE DESTINATION bin
    )

    target_link_libraries(${This} HardwareTools)

endif()


