
#include <stdio.h>

int main() {
    int result;
    // Using the __has_feature macro to check for No Sanitize CFI Attributes feature
    #if __has_feature(no_sanitize_cfi)
        result = 100;
    #else
        result = -100;
    #endif

    printf("Result: %d\n", result);

    return 0;
}
