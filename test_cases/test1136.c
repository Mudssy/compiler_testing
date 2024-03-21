
#include <stdio.h>

int main(void) {
    char arr[10] = "abcdefghi";
    __builtin___clear_cache((void*)arr, (void*)(arr+9)); // clear cache for next prefetch operation
    
    if(__builtin_prefetch(&arr[5], 0 /* read */, 3 /* temporal locality */)) {
        printf("Prefetch successful\n");
    } else {
        printf("Prefetch failed\n");
    }

    return 0;
}
