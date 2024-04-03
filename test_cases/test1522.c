
#include <stdio.h>

// Tentative definition (C17 feature)
int a; // tentative definition
extern int b; // external tentative definition

void use_tent() {
    printf("Using tentative definitions: %d\n", a + b);
}
