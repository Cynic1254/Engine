#include "Graphics/Graphics.hpp"

#include "GLFW/glfw3.h"

namespace Graphics {

bool Graphics::LoadContext() {
    SetVariables();
    
    return true;
}

void Graphics::SetViewport(int x, int y, int width, int height) {
    glViewport_(x, y, width, height);
}

void Graphics::SetClearColor(float r, float g, float b, float a) {
    glClearColor_(r, g, b, a);
}

void Graphics::Clear() {
    glClear_(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

} // Graphics