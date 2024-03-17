
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int *p = &x;
    int *q = &y;
    
    if (p == q) {
        printf("Pointers are aliased.\n");
    } else {
        printf("Pointers are not aliased.\n");
    }
    
    return 0;
}
