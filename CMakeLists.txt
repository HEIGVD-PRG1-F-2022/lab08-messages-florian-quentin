cmake_minimum_required(VERSION 3.23)
project(08-Messages)

set(CMAKE_CXX_STANDARD 20)

add_executable(messages main.cpp Afficher.cpp Afficher.h BaseLecture.cpp BaseLecture.h emails/Email.cpp emails/Email.h)
