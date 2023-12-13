cmake_minimum_required(VERSION 3.24)
project(fast_limit_order)

set(CMAKE_CXX_STANDARD 20)

add_executable(fast_limit_order src/main.cpp src/Order.cpp src/Order.h src/Limit.cpp src/Limit.h src/Book.cpp src/Book.h)
