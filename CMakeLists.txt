cmake_minimum_required(VERSION 3.23)
project(08-Messages)

set(CMAKE_CXX_STANDARD 20)

add_executable(messages main.cpp Afficher.h emails/Email.cpp emails/Email.h Toots/Toot.cpp Toots/Toot.h)
