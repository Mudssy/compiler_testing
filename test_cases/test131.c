
#include <stdio.h>

int main() {
    struct {
        int x;
        float y;
    } a = {1, 2.0};
    
    union {
        int x;
        float y;
    } b;
    
    b.x = 3;
    
    printf("Size of struct: %zu\n", sizeof(a));
    printf("Size of union: %zu\n", sizeof(b));
    return 0;
}
