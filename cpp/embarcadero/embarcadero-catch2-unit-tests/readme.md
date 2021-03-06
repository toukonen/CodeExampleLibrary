
# Embarcadero unit testing

This example shows how to use catch2 unit tests with static library.

## How to use

 1. Open: embarcadero-catch2-unit-tests.groupproj
 2. Build all from project group
 3. Run WindowsApplication.exe to test application
 4. Run ExternalLibTests.exe to run all unit tests

## Dependencies

**WindowsApplication.exe**

 - Basic vlc windows application which use functionality from
   ExternalLib.a

**ExternalLib**

 - Static library which implement all functionality for
   WindowsApplication
 - Functionality is in separated files exp. Encoders\AbsoluteEncoders\MockAbsoluteEncoder.cpp

**ExternalLibTest**

 - Application to run test for ExternalLib library
 -- Main.cpp include catch.hpp and create main application for all tests
 -- Test are in separated files exp. Encoders\AbsoluteEncoders\MockAbsoluteEncoderTests.cpp
 - Based to catch2 unit test framwork
 - To get more help run in cmd: ExternalLibTests.exe -h
 - [Catch2 tutorial](https://github.com/catchorg/Catch2/blob/
