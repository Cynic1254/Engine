#include "Window/WindowManager.hpp"

#include "Window/Context.hpp"
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

WindowManager::~WindowManager() {
}

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

std::unique_ptr<Window> WindowManager::CreateWindow(int width, int height, const char *title) {
    auto* p_window = new Window(width, height, title, this);
    return std::unique_ptr<Window>(p_window);
}
bool WindowManager::RequestContext(Window *window) {
    if (CurrentContext == window)
        return true;

    glfwMakeContextCurrent(window->window_);
    
    return Graphics::Graphics::GetInstance().LoadContext();
}

void WindowManager::RemoveIfCurrent(Window *window) {
    if (CurrentContext == window)
        CurrentContext = nullptr;
}

void WindowManager::Shutdown() {
    glfwTerminate();
}
void WindowManager::PollEvents() {
    glfwPollEvents();
}

} // Window