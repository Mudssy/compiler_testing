
#ifdef _MSC_VER  // For MSVC compiler
    #define __include_next(x) <##x##>
#elif defined(__GNUC__)  // For GCC, MinGW, or clang compilers
    #define PACK( __Declaration__ ) __Declaration__ __attribute__((packed))
#else
    #error Compiler not supported
#endif
