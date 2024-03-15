
#include <stdio.h>

int main() {
    int x __attribute__((noalias)) = 5;
    int y __attribute__((noalias)) = 10;
    int *px = &x;
    int *py = &y;
    
    printf("Values before:\nx: %d\ny: %d\n", x, y);
    
    *px += 5;
    *py -= 3;
    
    printf("Values after addition and subtraction:\nx: %d\ny: %d\n", x, y);
    
    return 0;
}
