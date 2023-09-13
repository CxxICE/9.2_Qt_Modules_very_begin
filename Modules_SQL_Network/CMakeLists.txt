cmake_minimum_required(VERSION 3.14)

project(Modules_SQL_Network LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Sql Network)

add_executable(Modules_SQL_Network
  main.cpp
)
target_link_libraries(Modules_SQL_Network Qt6::Core Qt6::Network Qt6::Sql)


