cmake_minimum_required(VERSION 3.2)
project(task1 VERSION 0.1.0 LANGUAGES CXX)

option(USE_FLOAT "Использовать Float вместо Double" ON)
if (USE_FLOAT)
    add_compile_definitions(USE_FLOAT)
endif()

add_executable(task1 main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# Float: cmake -D USE_FLOAT=ON -B ./build && make -C ./build && ./build/task1 && rm -rf ./build
# Double: cmake -D USE_FLOAT=OFF -B ./build && make -C ./build && ./build/task1 && rm -rf ./build
