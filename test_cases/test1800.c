
#include <stdio.h>

int main() {
    int a[10];
    char b;
    
    // Misuse of sizeof operator on a pointer type
    printf("Sizeof(a) should be 40: %zu\n", sizeof(a));
    printf("Misuse: Sizeof(&b) should be 4, but is: %zu\n", sizeof(&b));
    
    return 0;
}
