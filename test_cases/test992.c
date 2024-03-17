
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c[5] = {1, 2, 3, 4, 5};
    
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    
    for (int i = 0; i < 5; ++i) {
        printf("Value of c[%d]: %d\n", i, c[i]);
    }
    
    return 0;
}
