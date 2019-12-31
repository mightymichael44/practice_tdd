project(my_method)

set(
    src_files
    src/my_method.cpp)

add_library(
    ${PROJECT_NAME}
    ${src_files})

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    include/)