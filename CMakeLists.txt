cmake_minimum_required(VERSION 3.25.2)

project(Engine)

#set language standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

#add source files for final executable
set(EXECUTABLE_SRC
        source/Engine/main.cpp
        source/Window/WindowManager.cpp
        source/Window/Context.cpp
        source/Graphics/Graphics.cpp
)

set(EXECUTABLE_INC
        include/Window/WindowManager.hpp
        include/Window/Context.hpp
        include/Graphics/Graphics.hpp
)

set(GLAD_SRC
        source/glad.c
)

set(DEBUG_SRC
        source/Debugging/ExceptionBase.cpp
)

set(DEBUG_INC
        include/Debugging/ExceptionBase.hpp
)

#set glfw options
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

#add glfw to project
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Extern/glfw)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(DebugLib STATIC ${DEBUG_SRC} ${DEBUG_INC})

add_executable(Engine ${EXECUTABLE_SRC} ${GLAD_SRC})


#link debug library to executable
target_link_libraries(Engine DebugLib)

#link glfw to executable
target_link_libraries(Engine glfw)

