
#include <stdio.h>
#include <stdalign.h>

typedef enum { A, B, C } MyEnum;

typedef struct {
    unsigned int a:1;
    unsigned int b:2;
} MyBitfield;

int main() {
    printf("Size of enum: %lu\n", sizeof(MyEnum));
    
    MyEnum var = B;
    printf("Value of enum variable: %d\n", var);
    
    MyBitfield bitfield;
    bitfield.a = 1; // set the first bit (LSB)
    bitfield.b = 2; // set the next two bits
    printf("Value of bitfield: 0x%X\n", *(unsigned int *)&bitfield);
    
    printf("Size of struct containing bitfield: %lu\n", sizeof(MyBitfield));
    
    printf("Alignment of struct containing bitfield: %lu\n", alignof(MyBitfield));
    
    return 0;
}
