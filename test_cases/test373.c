
#include <stdio.h>
int main() {
    int a = 10;
    int b = 3;
    
    printf("Arithmetic Operations:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (integer division)\n", a / b);  // Integer division for C89 and later
    printf("a mod b = %d (modulo operation)\n", a % b);
    
    return 0;
}
