project(test_state_machine)

set(src_files
    test_action.cpp)

add_executable(
    ${PROJECT_NAME}
    ${src_files})

target_link_libraries(
    ${PROJECT_NAME}
    state_machine
    gtest_main)