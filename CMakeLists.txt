cmake_minimum_required(VERSION 3.23)
project(08-Messages)

set(CMAKE_CXX_STANDARD 20)

add_executable(messages src/main.cpp include/Afficher.h src/Email.cpp include/Email.h src/Toot.cpp include/Toot.h src/Util.cpp include/Util.h)
