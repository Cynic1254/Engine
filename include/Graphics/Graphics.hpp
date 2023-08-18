#ifndef ENGINE_SOURCE_GRAPHICS_GRAPHICS_HPP_
#define ENGINE_SOURCE_GRAPHICS_GRAPHICS_HPP_

namespace Window {
    class Window;
}

namespace Graphics {

class Graphics {
public:
    bool LoadContext();
    
    static Graphics& GetInstance() {
        static Graphics instance;
        return instance;
    }
    
protected:
private:
    Graphics() = default;
    ~Graphics() = default;
    
    Graphics(Graphics const&) = delete;
    Graphics& operator=(Graphics const&) = delete;
    
    
    friend class Window::Window;
    //functions that are window class only here
private:
    void SetViewport(int x, int y, int width, int height);
    void SetClearColor(float r, float g, float b, float a);
    void Clear();
};

} // Graphics

#endif //ENGINE_SOURCE_GRAPHICS_GRAPHICS_HPP_
