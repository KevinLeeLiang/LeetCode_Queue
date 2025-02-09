cmake_minimum_required(VERSION 3.17)
project(Queue)

set(CMAKE_CXX_STANDARD 20)
include_directories(util)
add_executable(Queue main.cpp test_factory.h util/util.h L225_MyStack/L225_MyStack.cpp L225_MyStack/L225_MyStack.h L232_MyQueue/L232_MyQueue.cpp L232_MyQueue/L232_MyQueue.h)