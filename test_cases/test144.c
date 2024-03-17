
#include <stdio.h>

int main(void) {
    #ifdef __has_feature
        if (__has_feature(libIndex))
            printf("Macro Indexing is supported\n");
        else
            printf("Macro Indexing is not supported\n");
    #else
        printf("Macro Indexing feature checking is not supported\n");
    #endif

    return 0;
}
