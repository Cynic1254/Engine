cmake_minimum_required(VERSION 3.25.2)

project(Engine)

#set language standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

#add source files for final executable
set(EXECUTABLE_SRC
        source/Engine/main.cpp
        
        source/Window/WindowManager.cpp
        source/Window/Window.cpp
        source/Window/GuiContext.cpp
        source/Window/GuiContextManager.cpp
        
        source/Graphics/Graphics.cpp
)

set(EXECUTABLE_INC
        include/Window/WindowManager.hpp
        include/Window/Window.hpp
        include/Window/GuiContext.hpp
        include/Window/GuiContextManager.hpp
        
        include/Graphics/Graphics.hpp
)

set(GL_SRC
        #source/glad.c
        include/Tools/types.hpp
        include/Graphics/GLFunctions.hpp
)

set(TOOLS_SRC
        source/Debugging/ExceptionBase.cpp
)

set(TOOLS_INC
        include/Debugging/ExceptionBase.hpp
        include/Tools/Singleton.hpp
)

#test if on linux and install xorg-dev libglu1-mesa-dev
# Include required packages if on Linux
if(UNIX AND NOT APPLE)
    find_package(PkgConfig REQUIRED)
    pkg_search_module(X11 REQUIRED x11)
    pkg_search_module(GLU REQUIRED glu)

    # Additional packages you might need can be added here

    include_directories(${X11_INCLUDE_DIRS} ${GLU_INCLUDE_DIRS})
endif()

#set glfw options
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

#add glfw to project
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Extern/glfw)

#add imgui to project
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Extern/ImGui)

#link glfw to ImGui
target_link_libraries(ImGui glfw)

#add include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

#add debug library
add_library(ToolLib STATIC ${TOOLS_SRC} ${TOOLS_INC})

#add executable
add_executable(Engine ${EXECUTABLE_SRC} ${EXECUTABLE_INC} ${GL_SRC})

#link debug library to executable
target_link_libraries(Engine ToolLib)

#link tools library to executable
#target_link_libraries(Engine ToolsLib)

#link glfw to executable
target_link_libraries(Engine glfw)

#link ImGui to executable
target_link_libraries(Engine ImGui)