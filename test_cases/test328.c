
#if __has_include(<availability.h>) && (defined(__MAC_OS_X_VERSION_MIN_REQUIRED) || defined(_WIN32))
    #define CHECK_AVAILABLE 1
#endif

#ifdef CHECK_AVAILABLE
    #if __has_feature(objc_arc)
        #warning Objective-C Automatic Reference Counting is available.
    #else
        #error Objective-C Automatic Reference Counting is not available.
    #endif

    #if defined(__MAC_OS_X_VERSION_MIN_REQUIRED) && (__MAC_OS_X_VERSION_MIN_REQUIRED >= 1090)
        #warning AppKit API is available.
    #else
        #error AppKit API is not available.
    #endif
#else
    #warning Availability checks are not supported on this compiler or platform.
#endif
