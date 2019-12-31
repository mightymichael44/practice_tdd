project(test_game)

set(
    src_files
    test_game.cpp)

add_executable(
    ${PROJECT_NAME}
    ${src_files})

target_link_libraries(
    ${PROJECT_NAME}
    bowling_game
    gtest_main)