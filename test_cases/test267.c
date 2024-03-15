
#include <stdio.h>

int main() {
    #if __STDC_VERSION__ == 199409L
        printf("C89 standard used.\n");
    #elif __STDC_VERSION__ == 199901L
        printf("C99 standard used.\n");
    #elif __STDC_VERSION__ == 201112L
        printf("C11 standard used.\n");
    #else
        printf("Unknown C standard used.\n");
    #endif
    return 0;
}
