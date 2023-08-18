#include "Window/Window.hpp"

#include "Window/WindowManager.hpp"
#include "Graphics/Graphics.hpp"

#include "GLFW/glfw3.h"

#include <iostream>

namespace Window {

Window::~Window() {
    WindowManager::GetInstance().RemoveIfCurrent(this);
    glfwDestroyWindow(window_);
}

Window::Window(int width, int height, const char *name) {
    window_ = glfwCreateWindow(width, height, name, nullptr, nullptr);
    if (window_ == nullptr) {
        std::cerr << "Failed to create GLFW window" << std::endl;
    }
}

bool Window::makeContextCurrent() {

    if (WindowManager::GetInstance().RequestContext(this)) {
        Graphics::Graphics::GetInstance().SetViewport(0, 0, width_, height_);
        return true;
    }
    
    return false;
}

bool Window::shouldClose() {
    return glfwWindowShouldClose(window_);
}

void Window::SwapBuffers() {
    glfwSwapBuffers(window_);
}
void Window::SetClearColor(float r, float g, float b, float a) {
    WindowManager::GetInstance().RequestContext(this);
    Graphics::Graphics::GetInstance().SetClearColor(r, g, b, a);
}

void Window::Clear() {
    WindowManager::GetInstance().RequestContext(this);
    Graphics::Graphics::GetInstance().Clear();
}

} // Window