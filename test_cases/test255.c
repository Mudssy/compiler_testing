
#if __cplusplus >= 201703L && defined(__has_include)
    #if __has_include(<version>)
        #include <version>
    #endif
#else
    #error This program requires C++17 or later.
#endif

#ifdef __cpp_inline_namespaces
    inline namespace v1 { int x = 5; }
    inline namespace v2 { int y = x + 3; }
#else
    #error Inline namespaces are not supported in your compiler.
#endif

int main() {
    return 0;
}
