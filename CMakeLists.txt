cmake_minimum_required(VERSION 3.25)
project(command)

set(CMAKE_CXX_STANDARD 23)

add_executable(command main.cpp include/Command.hpp src/SimpleCommand.cpp include/SimpleCommand.hpp src/Receiver.cpp include/Receiver.hpp src/ComplexCommand.cpp include/ComplexCommand.hpp src/Invoker.cpp include/Invoker.hpp)
