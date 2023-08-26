

#include "Window/GuiContext.hpp"
#include "Window/GuiContextManager.hpp"
#include "Window/Window.hpp"

#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_glfw.h"
#include "ImGui/imgui_impl_opengl3.h"
#include "GLFW/glfw3.h"

namespace Window {

GuiContext::GuiContext(Window* window) : m_window(window) {
    window->makeContextCurrent();
    
    m_context = ImGui::CreateContext();
    GuiContextManager::GetSingleton().RequestContext(this);
    
    ImGui_ImplGlfw_InitForOpenGL(window->GetWindow(), true);
    ImGui_ImplOpenGL3_Init("#version 460 core");
}

GuiContext::~GuiContext() {
    m_window->makeContextCurrent();
    GuiContextManager::GetSingleton().RequestContext(this);
    
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext(m_context);
    
    GuiContextManager::GetSingleton().CurrentContext = nullptr;
    //GuiContextManager::GetSingleton().RemoveIfCurrent(this);
}

void GuiContext::NewFrame() {
    m_window->makeContextCurrent();
    GuiContextManager::GetSingleton().RequestContext(this);
    
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
}

void GuiContext::Render() {
    m_window->makeContextCurrent();
    GuiContextManager::GetSingleton().RequestContext(this);
    
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

bool GuiContext::MakeContextCurrent() {
    return GuiContextManager::GetSingleton().RequestContext(this);
}

void GuiContext::ShowDemoWindow() {
    GuiContextManager::GetSingleton().RequestContext(this);
    ImGui::ShowDemoWindow();
}

} // Window