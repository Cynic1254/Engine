#include "Window/Context.hpp"

#include "Window/WindowManager.hpp"
#include "Graphics/Graphics.hpp"

#include "GLFW/glfw3.h"

#include <iostream>

namespace Window {

Window::~Window() {
    windowManager_->RemoveIfCurrent(this);
    glfwDestroyWindow(window_);
}

Window::Window(int width, int height, const char *name, WindowManager *WindowManager)
    : windowManager_(WindowManager) {
    window_ = glfwCreateWindow(width, height, name, nullptr, nullptr);
    if (window_ == nullptr) {
        std::cerr << "Failed to create GLFW window" << std::endl;
    }
}

bool Window::makeContextCurrent() {

    if (windowManager_->RequestContext(this)) {
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

} // Window