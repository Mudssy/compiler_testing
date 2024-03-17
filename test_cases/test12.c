
#include <stdio.h>

int main() {
    volatile int vi = 10;
    const int ci = 20;
    
    printf("Volatile Variable: %d\n", vi);
    printf("Const Variable: %d\n", ci);
    
    return 0;
}
