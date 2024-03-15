
#include <stdio.h>

typedef struct {
    int a;
    int b;
    int c;
} MyStruct;

int main() {
    MyStruct ms = { .b = 2, .a = 1, .c = 3 };
    
    printf("MyStruct members: %d, %d, %d\n", ms.a, ms.b, ms.c);
    return 0;
}
