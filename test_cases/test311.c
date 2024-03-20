
#include <stdio.h>

void foo(int *ptr) {
    int value = *((int*)ptr);
    printf("%d\n", value);  // output will depend on strict-aliasing rule
}

int main() {
    union {
        int i;
        float f;
    } u;
    
    u.i = 42;
    
    foo(&u.f);
    
    return 0;  // this will not run forever in C89 or later, just depends on strict-aliasing rule
}
