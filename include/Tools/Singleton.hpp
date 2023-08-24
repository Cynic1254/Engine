

#ifndef ENGINE_SOURCE_TOOLS_SINGLETON_HPP_
#define ENGINE_SOURCE_TOOLS_SINGLETON_HPP_

namespace Tools {

template<class type>
class Singleton {
public:
    static type& GetSingleton() {
        static type instance;
        return instance;
    }

    Singleton(Singleton const&) = delete;
    void operator=(Singleton const&) = delete;

    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;
    
    Singleton() = default;
    
private:
    friend type;
};

}

#endif //ENGINE_SOURCE_TOOLS_SINGLETON_HPP_
