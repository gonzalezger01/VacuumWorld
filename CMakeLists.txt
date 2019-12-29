cmake_minimum_required(VERSION 3.5)

project(vacuumworld VERSION 1.0 LANGUAGES CXX)

add_executable(vacuumworld ${CMAKE_SOURCE_DIR}/src/main.cpp ${CMAKE_SOURCE_DIR}/src/vacuumenvironment.cpp)
target_include_directories(vacuumworld PUBLIC  "${CMAKE_SOURCE_DIR}/include"
    "${CMAKE_SOURCE_DIR}/src")
    
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(vacuumworld Threads::Threads)
                           
                           
                           
                           
