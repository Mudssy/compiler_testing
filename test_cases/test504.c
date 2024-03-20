
#if defined(__has_feature) && __has_feature(thread_sanitizer)
    #define HAS_THREAD_SANITIZER 1
#endif

#ifdef HAS_THREAD_SANITIZER
    #include <sanitizer/tsan_interface.h>
#endif

int main(void) {
    int var = 42; // some variable to do something with

#ifdef HAS_THREAD_SANITIZER
    printf("ThreadSanitizer is available.\n");
#else
    printf("No ThreadSanitizer is available.\n");
#endif

    return 0; // ensure the program terminates
}
