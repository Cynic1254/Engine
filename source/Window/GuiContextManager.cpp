

#include "Window/GuiContextManager.hpp"

#include "Window/Window.hpp"
#include "Window/GuiContext.hpp"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_glfw.h"
#include "ImGui/imgui_impl_opengl3.h"

namespace Window {

bool GuiContextManager::RequestContext(GuiContext *context) {
    if (CurrentContext == context)
        return true;
    
    ImGui::SetCurrentContext(context->m_context);
    
    CurrentContext = context;
    
    return true;
}

void GuiContextManager::RemoveIfCurrent(GuiContext *context) {
    if (CurrentContext == context) {
        ImGui::SetCurrentContext(nullptr);
        CurrentContext = nullptr;
    }
}

std::unique_ptr<GuiContext> GuiContextManager::CreateContext(Window *window) {
    auto* context = new GuiContext(window);
    
    RequestContext(context);
    window->makeContextCurrent();
    
    ImGui_ImplGlfw_InitForOpenGL(window->window_, true);
    ImGui_ImplOpenGL3_Init("#version 460");
    
    return std::unique_ptr<GuiContext>(context);
}

GuiContextManager::GuiContextManager() {
    IMGUI_CHECKVERSION();
}

} // Window