
#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>

int main() {
    void *p1 = malloc(1024);
    _Alignas(64) char a[1024];
    
    if (!p1 || ((uintptr_t) p1 % alignof(max_align_t)) != 0 || ((uintptr_t) a % alignof(max_align_t)) != 0) {
        printf("Alignment not achieved\n");
        return 0; // Exit program if alignment not satisfied
    }
    
    void *p2 = p1 + 512 + alignof(long long);
    _Alignas(alignof(int)) char a2[4];
    
    if (((uintptr_t)p2 % alignof(a2)) != 0) {
        printf("Second alignment not achieved\n");
        return 0; // Exit program if second alignment not satisfied
    }

    printf("Alignment achieved for both variables\n");
    
    free(p1);
    
    return 0;
}
