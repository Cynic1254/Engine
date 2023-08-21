

#ifndef ENGINE_SOURCE_WINDOW_GUICONTEXT_HPP_
#define ENGINE_SOURCE_WINDOW_GUICONTEXT_HPP_

struct ImGuiContext;

namespace Window {

class Window;

class GuiContext {
public:
    ~GuiContext();

    void NewFrame();
    void Render();
    
    bool MakeContextCurrent();
    
    void ShowDemoWindow();
protected:
    ImGuiContext* m_context;
    Window* m_window;
private:
    GuiContext(Window* window);
    
    friend class GuiContextManager;
};

} // Window

#endif //ENGINE_SOURCE_WINDOW_GUICONTEXT_HPP_
