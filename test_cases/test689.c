
#include <stdio.h>

typedef struct {
    int a;
} MyStruct;

typedef union {
    long b;
} MyUnion;

int main() {
    MyStruct s = {42};
    MyStruct* sp = &s;
    
    // Testing Struct member access rewriting with pointer arithmetic.
    (*((char*)sp + 0)) = 13; // Setting a to 13 using pointer arithmetic.
    printf("After setting 'a' to 13, s.a is %d\n", sp->a);
    
    MyUnion u = {42};
    MyUnion* up = &u;
    
    // Testing Union member access rewriting with pointer arithmetic.
    (*((char*)up + 0)) = 13; // Setting b to 13 using pointer arithmetic.
    printf("After setting 'b' to 13, u.b is %ld\n", up->b);
    
    return 0;
}
