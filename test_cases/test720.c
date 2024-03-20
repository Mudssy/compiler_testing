
#include <stdio.h>

int g1 __attribute__((weak)) = 1;
int g2 __attribute__((common)) = 2;
int g3 __attribute__((weak_reference, common)) = 3;
volatile int *g1p = &g1;
volatile int *g2p = &g2;
volatile int *g3p = &g3;

int main() {
    printf("Address of g1: %p\n", (void *)&g1);
    printf("Address of g2: %p\n", (void *)&g2);
    printf("Address of g3: %p\n", (void *)&g3);
    printf("Value of g1: %d\n", *g1p);
    printf("Value of g2: %d\n", *g2p);
    printf("Value of g3: %d\n", *g3p);
    return 0;
}
