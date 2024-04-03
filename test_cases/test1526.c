
#include <stdio.h>

typedef struct {
    short s;
    long l;
} StructType1;

typedef union {
    int i;
    float f;
} UnionType;

int main() {
    StructType1 st1 = { 1, 2 };
    printf("StructType1: %hd %ld\n", st1.s, st1.l);
    
    UnionType ut = { .i = 3 };
    printf("UnionType as int: %d\n", ut.i);
    ut.f = 4.0;
    printf("UnionType as float: %f\n", ut.f);
    
    return 0;
}
