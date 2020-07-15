cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_CXX_COMPILER clang++)
project(wxwidgets_test CXX)

find_package(wxWidgets REQUIRED)

add_executable(${PROJECT_NAME} src/main.cc)

target_include_directories(${PROJECT_NAME} PRIVATE src)
target_include_directories(${PROJECT_NAME} PRIVATE ${wxWidgets_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} PRIVATE ${wxWidgets_LIBRARIES})

if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_link_options(${PROJECT_NAME} PRIVATE /SUBSYSTEM:WINDOWS)
else()
    target_link_options(${PROJECT_NAME} PRIVATE -static -s -mwindows)
endif()
