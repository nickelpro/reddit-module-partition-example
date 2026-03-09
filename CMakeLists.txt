cmake_minimum_required(VERSION 3.31)

project(reddit-module-partition-example LANGUAGES CXX)

add_library(mod)
target_sources(mod
  PUBLIC
    FILE_SET CXX_MODULES
    BASE_DIRS
      src
    FILES
      src/mod.cppm
      src/partition.cppm

  PRIVATE
    FILE_SET cxxImpl
    TYPE CXX_MODULES
    BASE_DIRS
      src
    FILES
      src/partition.cpp
)
target_compile_features(mod
  PUBLIC
    cxx_std_20
)

add_executable(main)
target_sources(main
  PRIVATE
    test/main.cpp
)
target_link_libraries(main
  PRIVATE
    mod
)

enable_testing()
add_test(NAME main COMMAND main)
