

#include "Window/GuiContextManager.hpp"

#include "Window/Window.hpp"
#include "Window/GuiContext.hpp"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_glfw.h"
#include "ImGui/imgui_impl_opengl3.h"

namespace Window {

bool GuiContextManager::RequestContext(GuiContext *context) {
    
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
    return std::unique_ptr<GuiContext>(new GuiContext(window));
}

GuiContextManager::GuiContextManager() {
    IMGUI_CHECKVERSION();
}

} // Window