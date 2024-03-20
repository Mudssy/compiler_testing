
#include <stdio.h>

typedef struct { int x; } T1;
T1 y = { 5 };
int main(void)
{
    typedef struct T2 { int x; } MyType;
    MyType z = { 7 };
    
    printf("y: %d, z: %d\n", y.x, z.x);
    
    return 0;
}
