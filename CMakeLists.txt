cmake_minimum_required(VERSION 3.25.2)

project(Engine)

#set language standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

#add source files
set(SOURCES
    source/main.cpp
)

set(LIB
    library/Library.cpp
)

add_library(EngineLib ${LIB})

target_include_directories(EngineLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/library)

add_executable(Engine ${SOURCES})

target_link_libraries(Engine PRIVATE EngineLib)