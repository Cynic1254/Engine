
#include "Window/WindowManager.hpp"
#include "Window/Window.hpp"

int main(int argc, char* argv[])
{
    Window::WindowManager& windowManager = Window::WindowManager::GetInstance();
    
    auto window = windowManager.CreateWindow(800, 600, "Test Window");
    
    window->makeContextCurrent();
    
    window->SetClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    
    while (!window->shouldClose()) {
        window->Clear();
        
        window->SwapBuffers();
        windowManager.PollEvents();
    }
    
    window.reset();
    
    windowManager.Shutdown();
    
    return 0;
}