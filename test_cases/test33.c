
#include <stdio.h>

typedef struct {
    int type;
    union {
        int i;
        float f;
    };
} Number;

int main() {
    Number num;
    
    // Initialize the anonymous union as an integer
    num.type = 0;
    num.i = 10;
    
    printf("Integer: %d\n", num.i);  // Prints: Integer: 10
    
    // Now change the type to float and initialize it
    num.type = 1;
    num.f = 20.5;
    
    printf("Float: %f\n", num.f);  // Prints: Float: 20.500000

    return 0;
}
