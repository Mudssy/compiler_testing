
#ifdef _MSC_VER  // For MSVC compiler
    #define __include_next(x) <##x##>
#elif defined(__GNUC__)  // For GCC or MinGW compilers
    #define __include_next(x) "x"
#else
    #error Compiler not supported
#endif

// ... some code here ...

#if defined(_MSC_VER) || !defined(__GNUC__)  // MSVC or non-GCC compilers
do { \
         #include __include_next(x)
     } while (0);
#elif defined(__GNUC__)  // GCC compiler
    do { \
        #include "x"
    } while (0);
#endif
