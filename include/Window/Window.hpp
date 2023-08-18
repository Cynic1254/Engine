#ifndef ENGINE_SOURCE_WINDOW_WINDOW_HPP_
#define ENGINE_SOURCE_WINDOW_WINDOW_HPP_

namespace Graphics {
    class Graphics;
}

struct GLFWwindow;

namespace Window {

class WindowManager;

/// \brief Represents a window
class Window {
public:
    ~Window();
    
    /// \brief Requests the window to be made the current context
    /// \return true if successful, false otherwise
    bool makeContextCurrent();
    
    /// \brief Whether or not the window should close
    /// \return true if the window should close, false otherwise
    bool shouldClose();
    
    void SwapBuffers();
    /// \brief Sets the clear color granting context if window is not current context
    void SetClearColor(float r, float g, float b, float a);
    /// \brief Clears the screen granting context if window is not current context
    void Clear();
protected:
private:
    explicit Window(int width, int height, const char *name);

    GLFWwindow *window_ = nullptr;
    
    int width_ = 0;
    int height_ = 0;

    friend class WindowManager;
    friend class Graphics::Graphics;
};

} // Window

#endif //ENGINE_SOURCE_WINDOW_WINDOW_HPP_
