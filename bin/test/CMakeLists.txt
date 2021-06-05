cmake_minimum_required(VERSION 3.10)

#Example print statement for reference
#message(STATUS "Testfile is ${TESTFILE}")

#add all unit tests
foreach(TESTFILE ${TESTFILES})
    get_filename_component(TESTNAME ${TESTFILE} NAME_WE)
    add_executable(${TESTNAME} ${TESTFILE})
    target_link_libraries(${TESTNAME} SRCLIB)
    add_test(NAME ${TESTNAME} COMMAND "./${TESTNAME}")
endforeach(TESTFILE)
