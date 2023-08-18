#ifndef ENGINE_SOURCE_WINDOW_WINDOWMANAGER_HPP_
#define ENGINE_SOURCE_WINDOW_WINDOWMANAGER_HPP_

#include <memory>

namespace Window {

class Window;

class WindowManager {
public:
    std::unique_ptr<Window> CreateWindow(int width, int height, const char *title);
    
    //make Window manager a singleton
    static WindowManager& GetInstance() {
        static WindowManager instance;
        return instance;
    }
    
    void Shutdown();
    
    void PollEvents();
protected:
private:
    static void LogError(int error, const char *description);
    static bool error_logged_;
    static bool initialized_;

    static bool Initialize();
    
    bool RequestContext(Window* window);
    void RemoveIfCurrent(Window* window);
    
    Window* CurrentContext = nullptr;
    
    friend class Window;
    
    WindowManager();
    ~WindowManager();
};

} // Window

#endif //ENGINE_SOURCE_WINDOW_WINDOWMANAGER_HPP_
