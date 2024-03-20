
#include <stdio.h>

// Check if __has_attribute is supported
#ifdef __has_attribute
    #define HAS_ATTRIBUTE(x) __has_attribute(x)
#else
    #define HAS_ATTRIBUTE(x) 0
#endif

void __attribute__((visibility("hidden"))) hiddenFunction() {
    printf("This is a function with hidden visibility.\n");
}

int main() {
    // Test if visibility attributes are supported.
    #if HAS_ATTRIBUTE(visibility) && !HAS_ATTRIBUTE(no_such_attribute)
        printf("Visibility attributes are supported by this compiler.\n");
        
        // Call the hidden function to check its effect on symbol visibilities.
        hiddenFunction();
    #else
        printf("Visibility attributes are not supported by this compiler.\n");
    #endif
    
    return 0;
}
