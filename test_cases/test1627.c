
#include <stdio.h>

typedef struct {
    char a;
    short b;
} A;

typedef struct {
    char a;
    int b;
} B;

int main() {
    printf("Size of A: %lu\n", sizeof(A));
    printf("Alignment requirement of A: %lu\n", _Alignof(A));
    
    printf("\n");
    
    printf("Size of B: %lu\n", sizeof(B));
    printf("Alignment requirement of B: %lu\n", _Alignof(B));

    return 0;
}
