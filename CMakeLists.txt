cmake_minimum_required(VERSION 3.10)
enable_testing()

# specify the C++ compiler
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

#set folder names
set(ROOTDIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(SRCDIR "${ROOTDIR}/src")
set(BINDIR "${ROOTDIR}/bin")
set(OBJDIR "${ROOTDIR}/obj")
set(INCLUDEDIR "${ROOTDIR}/include")
set(LIBDIR "${ROOTDIR}/lib")
set(TESTDIR "${ROOTDIR}/test")
set(BINTESTDIR "${BINDIR}/test")

file(GLOB_RECURSE SRCFILES "${SRCDIR}/*.cpp")

#Collect Unit Testing Files
file(GLOB_RECURSE TESTFILES "${TESTDIR}/*.cpp")

#set project name
project(emulator_ide VERSION 1.0)

include_directories(${INCLUDEDIR})

add_library(SRCLIB STATIC ${SRCFILES})

add_subdirectory(bin)

add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --verbose)
add_custom_target(delete COMMAND find . -type f -name '*~' -delete)
add_custom_target(document COMMAND doxygen ${ROOTDIR}/dconfig)
add_custom_target(cmake COMMAND cmake ${ROOTDIR}/CMakeLists.txt)
