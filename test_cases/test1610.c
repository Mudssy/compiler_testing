
#include <stdio.h>

int main() {
    int x = 10;
#pragma STDC FENV_ACCESS ON
    fprintf(stderr, "Hello, world!\n");

    return 0;
}
