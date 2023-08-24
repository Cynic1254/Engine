

#ifndef ENGINE_SOURCE_WINDOW_GUICONTEXTMANAGER_HPP_
#define ENGINE_SOURCE_WINDOW_GUICONTEXTMANAGER_HPP_

#include <memory>

#include "Tools/Singleton.hpp"

namespace Window {

class GuiContext;
class Window;

class GuiContextManager : public Tools::Singleton<GuiContextManager>{
public:
    std::unique_ptr<GuiContext> CreateContext(Window *window);
protected:
private:
    GuiContextManager();
    ~GuiContextManager() = default;
    
    bool RequestContext(GuiContext* context);
    void RemoveIfCurrent(GuiContext* context);
    
    GuiContext* CurrentContext = nullptr;
    
    friend class GuiContext;
    friend class Tools::Singleton<GuiContextManager>;
};

} // Window

#endif //ENGINE_SOURCE_WINDOW_GUICONTEXTMANAGER_HPP_
