#include "Window/Window.hpp"

#include "Window/WindowManager.hpp"
#include "Window/GuiContextManager.hpp"
#include "Window/GuiContext.hpp"
#include "Graphics/Graphics.hpp"

#include "GLFW/glfw3.h"

#include <iostream>

#ifdef _WIN32
#define GLFW_EXPOSE_NATIVE_WIN32
#include "GLFW/glfw3native.h"
#endif

namespace Window {

Window::~Window() {
    gui_context_.reset();
    
    glfwDestroyWindow(window_);
    
    WindowManager::GetSingleton().RemoveIfCurrent(this);
}

Window::Window(int width, int height, const char *name) : width_(width), height_(height){
    window_ = glfwCreateWindow(width, height, name, nullptr, nullptr);
    if (window_ == nullptr) {
        std::cerr << "Failed to create GLFW window" << std::endl;
    }

#ifdef _WIN32
    ::SetWindowLongPtr(glfwGetWin32Window(window_), GWLP_USERDATA, reinterpret_cast<LONG_PTR>(this));
#endif
    
    glfwSetWindowUserPointer(window_, this);
    
    glfwMakeContextCurrent(window_);
    WindowManager::GetSingleton().CurrentContext = this;
    
    graphics_ = new Graphics::Graphics();
    gui_context_ = GuiContextManager::GetSingleton().CreateContext(this);
}

bool Window::makeContextCurrent() {

    if (WindowManager::GetSingleton().RequestContext(this)) {
        graphics_->SetViewport(0, 0, width_, height_);
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
    WindowManager::GetSingleton().RequestContext(this);
    graphics_->SetClearColor(r, g, b, a);
}

void Window::Clear() {
    WindowManager::GetSingleton().RequestContext(this);
    graphics_->Clear();
}

} // Window