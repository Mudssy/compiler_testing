
#ifdef __has_builtin  // check if compiler has built-in support for #include_next
    #pragma GCC diagnostic ignored "-Wunknown-pragmas"   // suppress warning about unknown pragma
    #define CLANG_INCLUDE_NEXT(x) _Pragma("clang include_next <" x ">")
#else                  // if compiler doesn't support built-in feature, use fallback method
    #include <limits.h>  // include limits header to access PATH_MAX constant
    #define CLANG_INCLUDE_NEXT(x) _Pragma("clang system_header")  // fallback method for clang specific feature
#endif

int main() {
    #ifdef __has_include_next  // check if compiler supports include_next feature
        const char *headerPath = "/path/to/header.h";   // path to header file
        CLANG_INCLUDE_NEXT(headerPath); // attempt to include the next instance of the header file
    #endif
}
