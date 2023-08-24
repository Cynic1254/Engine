#ifndef ENGINE_SOURCE_WINDOW_WINDOW_HPP_
#define ENGINE_SOURCE_WINDOW_WINDOW_HPP_

#include <memory>
namespace Graphics {
    class Graphics;
}

struct GLFWwindow;

namespace Window {

class GuiContext;

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
    
    [[nodiscard]] inline GuiContext& GetGuiContext() const { return *gui_context_; };
    [[nodiscard]] inline int GetWidth() const { return width_; };
    [[nodiscard]] inline int GetHeight() const { return height_; };
    [[nodiscard]] inline GLFWwindow* GetWindow() const { return window_; };
protected:
private:
    explicit Window(int width, int height, const char *name);

    GLFWwindow *window_ = nullptr;
    std::unique_ptr<GuiContext> gui_context_ = nullptr;
    
    int width_ = 0;
    int height_ = 0;

    friend class WindowManager;
    friend class Graphics::Graphics;
    
    Graphics::Graphics* graphics_ = nullptr;
    //friend class GuiContext;
};

} // Window

#endif //ENGINE_SOURCE_WINDOW_WINDOW_HPP_
