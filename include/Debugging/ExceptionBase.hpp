

#ifndef ENGINE_SOURCE_DEBUGGING_EXCEPTIONBASE_HPP_
#define ENGINE_SOURCE_DEBUGGING_EXCEPTIONBASE_HPP_

namespace Exceptions {

struct ExceptionBase {
    int error_code;
    const char *error_description;
};

} // Exceptions

#endif //ENGINE_SOURCE_DEBUGGING_EXCEPTIONBASE_HPP_
