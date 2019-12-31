project(test_my_method)

set(
    src_files
    test_quicksort.cpp)

add_executable(
    ${PROJECT_NAME}
    ${src_files})

target_link_libraries(
    ${PROJECT_NAME}
    my_method
    gtest_main)

add_test(
    NAME example_test
    COMMAND example)