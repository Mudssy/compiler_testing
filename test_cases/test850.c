
#include <stdio.h>

int main() {
    struct { int a; float b; } x = {1, 2.5};
    union { int c; char d[sizeof(int)]; } y;
    
    printf("Size of struct: %zu\n", sizeof(x));
    printf("Size of union: %zu\n", sizeof(y));

    return 0;
}
