
#include <stdio.h>

typedef struct {
    int a;
    float b;
} MyStruct;

int main() {
    MyStruct my_struct = {10, 20.5};
    
    printf("my_struct.a: %d\n", my_struct.a);
    printf("my_struct.b: %.1f\n", my_struct.b);
    
    return 0;
}
