

#ifndef ENGINE_SOURCE_WINDOW_GUICONTEXTMANAGER_HPP_
#define ENGINE_SOURCE_WINDOW_GUICONTEXTMANAGER_HPP_

#include <memory>

namespace Window {

class GuiContext;
class Window;

class GuiContextManager {
public:
//make class a singleton
    static GuiContextManager& GetInstance() {
        static GuiContextManager instance;
        return instance;
    }
//end singleton

    std::unique_ptr<GuiContext> CreateContext(Window *window);
protected:
private:
    GuiContextManager();
    ~GuiContextManager() = default;
    
    bool RequestContext(GuiContext* context);
    void RemoveIfCurrent(GuiContext* context);
    
    GuiContext* CurrentContext = nullptr;
    
    friend class GuiContext;
    friend class Window;
public:
    GuiContextManager(GuiContextManager const&) = delete;
    void operator=(GuiContextManager const&) = delete;
    
    GuiContextManager(GuiContextManager&&) = delete;
    GuiContextManager& operator=(GuiContextManager&&) = delete;
};

} // Window

#endif //ENGINE_SOURCE_WINDOW_GUICONTEXTMANAGER_HPP_
