
#include <stdio.h>

int main() {
    int var1 = 10;
    int *ptrVar1;
    ptrVar1 = &var1;
    
    printf("Address of var1: %p\n", ptrVar1);
    printf("Value at address pointed by ptrVar1: %d\n", *ptrVar1);
    
    return 0;
}
