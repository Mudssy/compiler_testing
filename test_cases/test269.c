
#include <stdio.h>

int main() {
    #define TEST_FEATURE "test_feature"
    #if defined(TEST_FEATURE)
        printf("Preprocessor option handling feature is supported.\n");
    #else
        printf("Preprocessor option handling feature is not supported.\n");
    #endif
    return 0;
}
