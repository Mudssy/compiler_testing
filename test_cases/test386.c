
#include <stdio.h>

int main() {
    const int x = 10;
    int* pX = (int*)&x; // This line may cause a warning or error if not supported
    
    printf("Address of x: %p\n", &x);
    printf("Value of x: %d\n", x);
    
    *pX = 20; // This line should modify the value of x
    
    printf("New address of x: %p\n", &x);
    printf("New value of x: %d\n", x);
    
    return 0;
}
