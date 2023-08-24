#ifndef ENGINE_SOURCE_WINDOW_WINDOWMANAGER_HPP_
#define ENGINE_SOURCE_WINDOW_WINDOWMANAGER_HPP_

#include <memory>

#include "Tools/Singleton.hpp"

namespace Window {

class Window;

/// \brief Manager Class for windows
class WindowManager : public Tools::Singleton<WindowManager> {
public:
    /// \brief Creates a window and returns a unique_ptr to it
    /// \param width width of the window
    /// \param height height of the window
    /// \param title title of the window
    /// \return Unique pointer to the created window
    std::unique_ptr<Window> CreateWindow(int width, int height, const char *title);
    
    /// \brief Shuts down the window manager
    void Shutdown();
    
    /// \brief Polls events
    void PollEvents();
protected:
private:
    /// \brief Logs glfw errors
    /// \param error error code
    /// \param description 
    static void LogError(int error, const char *description);
    /// \brief Whether or not an error has been logged
    static bool error_logged_;
    static bool initialized_;

    /// \brief Initializes the window manager
    /// \return true if successful, false otherwise
    static bool Initialize();
    
    /// \brief Sets the current context to the window
    /// \param window window to give context to
    /// \return true if successful, false otherwise
    bool RequestContext(Window* window);
    /// \brief Removes the current context if it is set to the window
    /// \param window window to remove context from
    void RemoveIfCurrent(Window* window);
    
    Window* CurrentContext = nullptr;
    
    friend class Window;
    friend class Tools::Singleton<WindowManager>;
    
    WindowManager();
    ~WindowManager();
};

} // Window

#endif //ENGINE_SOURCE_WINDOW_WINDOWMANAGER_HPP_
