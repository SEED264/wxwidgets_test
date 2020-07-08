cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_CXX_COMPILER clang++)
project(wxwidgets_test CXX)

find_package(wxWidgets REQUIRED)

add_executable(${PROJECT_NAME} src/main.cc)

target_include_directories(${PROJECT_NAME} PRIVATE ${wxWidgets_INCLUDE_DIRS})

target_link_options(${PROJECT_NAME} PRIVATE -static)