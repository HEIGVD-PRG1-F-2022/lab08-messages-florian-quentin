cmake_minimum_required(VERSION 3.23)
project(08-Messages)

set(CMAKE_CXX_STANDARD 20)

add_executable(messages src/main.cpp include/afficher.h src/email.cpp include/email.h src/toot.cpp include/toot.h src/util.cpp include/util.h include/menu.h)
