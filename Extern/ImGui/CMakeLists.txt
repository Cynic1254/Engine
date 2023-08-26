cmake_minimum_required(VERSION 3.26)
project(ImGui)

set(CMAKE_CXX_STANDARD 17)

set(LIB_SRC
        src/imgui.cpp
        src/imgui_demo.cpp
        src/imgui_draw.cpp
        #src/imgui_impl_glfw.cpp
        src/imgui_impl_opengl3.cpp
        src/imgui_tables.cpp
        src/imgui_widgets.cpp
)

add_library(ImGui STATIC ${LIB_SRC})
target_include_directories(ImGui PRIVATE include/ImGui)
target_include_directories(ImGui PUBLIC include)