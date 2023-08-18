
#include "Window/WindowManager.hpp"
#include "Window/Window.hpp"

int main(int argc, char* argv[])
{
    Window::WindowManager& windowManager = Window::WindowManager::GetInstance();
    
    auto window = windowManager.CreateWindow(800, 600, "Test Window");
    
    window->makeContextCurrent();
    
    while (!window->shouldClose()) {
        windowManager.PollEvents();
    }
    
    windowManager.Shutdown();
    
    return 0;
}