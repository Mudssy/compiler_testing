
#include <stdio.h>

int main() {
    int var = 10;
    int *p = &var;
    
    printf("Address of var: %p\n", (void*)&var);
    printf("Value at address stored in p: %d\n", *p);

    return 0;
}
