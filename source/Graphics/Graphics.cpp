

#include "Graphics/Graphics.hpp"

#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include <iostream>

namespace Graphics {

bool Graphics::LoadContext() {
    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        return false;
    }
    
    return true;
}
void Graphics::SetViewport(int x, int y, int width, int height) {
    glViewport(x, y, width, height);
}
void Graphics::SetClearColor(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
}
void Graphics::Clear() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
} // Graphics