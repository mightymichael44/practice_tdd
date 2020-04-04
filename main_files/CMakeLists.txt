project(state_machine)

set(src_files
    include/Action.h
    include/State.h
    include/StateMachine.h

    src/Action.cpp
    src/State.cpp
    src/StateMachine.cpp)

add_library(
    ${PROJECT_NAME}
    ${src_files})

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    include/)