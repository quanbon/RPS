cmake_minimum_required(VERSION 3.15.3)
project(RockPaperScissors)

set(CMAKE_CXX_STANDARD 14)

add_executable(RockPaperScissors main.cpp input_validation.cpp input_validation.h random.cpp random.h game.cpp game.h)
