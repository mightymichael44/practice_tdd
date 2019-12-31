project(bowling_game)

set(
    src_files
    src/game.cpp)

add_library(
    ${PROJECT_NAME}
    ${src_files})

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    include/)