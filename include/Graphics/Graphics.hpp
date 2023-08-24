#ifndef ENGINE_SOURCE_GRAPHICS_GRAPHICS_HPP_
#define ENGINE_SOURCE_GRAPHICS_GRAPHICS_HPP_

namespace Window {
    class Window;
}

#define GL_VERSION_1_0 1
#define GL_VERSION_1_1 1
#define GL_VERSION_1_2 1
#define GL_VERSION_1_3 1
#define GL_VERSION_1_4 1
#define GL_VERSION_1_5 1
#define GL_VERSION_2_0 1
#define GL_VERSION_2_1 1
#define GL_VERSION_3_0 1
#define GL_VERSION_3_1 1
#define GL_VERSION_3_2 1
#define GL_VERSION_3_3 1
#define GL_VERSION_4_0 1
#define GL_VERSION_4_1 1
#define GL_VERSION_4_2 1
#define GL_VERSION_4_3 1
#define GL_VERSION_4_4 1
#define GL_VERSION_4_5 1
#define GL_VERSION_4_6 1
#include "Graphics/GLFunctions.hpp"

namespace Graphics {

class Graphics{
public:
    bool LoadContext();
protected:
private:
    Graphics() {
        LoadContext();
    };
    ~Graphics() = default;
    
    friend class Window::Window;
    
    void SetViewport(int x, int y, int width, int height);
    void SetClearColor(float r, float g, float b, float a);
    void Clear();

    GenVariables();
};

} // Graphics

#endif //ENGINE_SOURCE_GRAPHICS_GRAPHICS_HPP_
