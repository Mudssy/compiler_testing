
#include <stdio.h>

void __attribute__((constructor)) setup(void) { printf("setup\n"); }

int main()
{
    printf("Hello, World!\n");
    return 0;
}
