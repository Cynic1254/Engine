
#include "Window/WindowManager.hpp"
#include "Window/Window.hpp"
#include "Window/GuiContext.hpp"

int main(int argc, char* argv[])
{
    Window::WindowManager& windowManager = Window::WindowManager::GetInstance();
    
    auto window = windowManager.CreateWindow(800, 600, "Test Window");
    auto window2 = windowManager.CreateWindow(800, 600, "Test Window 2");
    
    window->SetClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    window2->SetClearColor(0.3f, 0.3f, 0.2f, 1.0f);
    
    while (!window->shouldClose() && !window2->shouldClose()){
        window->Clear();
        window2->Clear();
        
        window2->GetGuiContext().NewFrame();
        
        window2->GetGuiContext().ShowDemoWindow();
        
        window2->GetGuiContext().Render();
        
        window->GetGuiContext().NewFrame();
        
        window->GetGuiContext().ShowDemoWindow();
        
        window->GetGuiContext().Render();
        
        window->SwapBuffers();
        window2->SwapBuffers();
        
        windowManager.PollEvents();
    }
    
    window.reset();
    window2.reset();
    
    windowManager.Shutdown();
    
    return 0;
}