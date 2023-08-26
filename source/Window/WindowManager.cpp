#include "Window/WindowManager.hpp"

#include "Window/Window.hpp"
#include "Graphics/Graphics.hpp"

#include "GLFW/glfw3.h"

#include <iostream>

namespace Window {

bool WindowManager::error_logged_ = false;
bool WindowManager::initialized_ = false;

WindowManager::WindowManager() {
    if (!initialized_)
        Initialize();
    else
        std::cerr << "WindowManager already initialized!" << std::endl;
}

WindowManager::~WindowManager() = default;

bool WindowManager::Initialize() {
    glfwSetErrorCallback(LogError);

    glfwInit();

    if (error_logged_)
        return false;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    if (error_logged_)
        return false;
    
    initialized_ = true;
    return true;
}

//log glfw error using std::cerr
void WindowManager::LogError(int error, const char *description) {
    std::cerr << "GLFW Error: " << error << " " << description << std::endl;
    error_logged_ = true;
}

std::unique_ptr<Window> WindowManager::CreateWindow(int width, int height, const char *title) { // NOLINT(*-convert-member-functions-to-static)
    auto* p_window = new Window(width, height, title);
    return std::unique_ptr<Window>(p_window);
}

bool WindowManager::RequestContext(Window *window) {
    if (glfwGetCurrentContext() == window->window_)
        return true;

    glfwMakeContextCurrent(window->window_);
    CurrentContext = window;
}

void WindowManager::RemoveIfCurrent(Window *window) {
    if (glfwGetCurrentContext() == window->window_) {
        glfwMakeContextCurrent(nullptr);
        CurrentContext = nullptr;
    }
}

void WindowManager::Shutdown() { // NOLINT(*-convert-member-functions-to-static)
    glfwTerminate();
}

void WindowManager::PollEvents() { // NOLINT(*-convert-member-functions-to-static)
    glfwPollEvents();
}

} // Window