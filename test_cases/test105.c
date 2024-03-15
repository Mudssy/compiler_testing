
#include <stdio.h>

int main() {
    int a[10], *p = a;
    for (int i = 0; i < 10; ++i) {
        a[i] = i;
    }
    
    printf("Before:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", p[i]);
    }
    
    int *restrict rp = &a[5];
    *rp += 42;
    
    printf("\nAfter:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", p[i]);
    }
    
    return 0;
}
