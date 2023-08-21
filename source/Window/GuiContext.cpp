

#include "Window/GuiContext.hpp"
#include "Window/GuiContextManager.hpp"
#include "Window/Window.hpp"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_glfw.h"
#include "ImGui/imgui_impl_opengl3.h"

namespace Window {

GuiContext::GuiContext(Window* window) : m_window(window) {
    m_context = ImGui::CreateContext();
}

GuiContext::~GuiContext() {
    GuiContextManager::GetInstance().RequestContext(this);
    
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext(m_context);
    
    GuiContextManager::GetInstance().RemoveIfCurrent(this);
}

void GuiContext::NewFrame() {
    GuiContextManager::GetInstance().RequestContext(this);
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
}

void GuiContext::Render() {
    GuiContextManager::GetInstance().RequestContext(this);
    m_window->makeContextCurrent();
    
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

bool GuiContext::MakeContextCurrent() {
    return GuiContextManager::GetInstance().RequestContext(this);
}
void GuiContext::ShowDemoWindow() {
    GuiContextManager::GetInstance().RequestContext(this);
    ImGui::ShowDemoWindow();
}

} // Window