
#include <stdio.h>

typedef struct {
    int a;
    float b;
} MyStruct;

MyStruct my_struct = {
    .a = 10,
    .b = 3.14
};

int main() {
    printf("The value of my_struct.a is %d\n", my_struct.a);
    printf("The value of my_struct.b is %.2f\n", my_struct.b);
    return 0;
}
