#ifndef ENGINE_SOURCE_WINDOW_WINDOW_HPP_
#define ENGINE_SOURCE_WINDOW_WINDOW_HPP_

namespace Graphics {
    class Graphics;
}

struct GLFWwindow;

namespace Window {

class WindowManager;

class Window {
public:
    ~Window();
    
    bool makeContextCurrent();
    
    bool shouldClose();
    
    void SwapBuffers();
protected:
private:
    explicit Window(int width, int height, const char *name, WindowManager *WindowManager);

    GLFWwindow *window_ = nullptr;
    
    WindowManager *windowManager_ = nullptr;
    
    int width_ = 0;
    int height_ = 0;

    friend class WindowManager;
    friend class Graphics::Graphics;
};

} // Window

#endif //ENGINE_SOURCE_WINDOW_WINDOW_HPP_
