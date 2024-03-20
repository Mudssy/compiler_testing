
#include <stdio.h>

int main() {
    #if __has_feature(cxx_lambda) || \
        (defined(__GNUC__) && defined(__GXX_EXPERIMENTAL_CXX0X__))
        printf("Lambda expressions supported\n");
    #else
        printf("Lambda expressions not supported\n");
    #endif
    return 0;
}
