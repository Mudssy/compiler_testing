
#include <stdio.h>

int main() {
    int a = 42;
    float b = 3.14f;
    
    printf("a = %d\n", a);
    printf("b = %f\n", b);

    printf("Explicit type conversion: int to float\n");
    b = (float) a;
    printf("b = %f\n", b);

    printf("Implicit type conversion: adding int and float\n");
    b = a + b;
    printf("a = %d, b = %f\n", a, b);

    return 0;
}
