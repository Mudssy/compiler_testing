
#include <stdio.h>

int main() {
    int a[10];
    __attribute__((address_space(1))) int *b = a;

    printf("Address Safety Analysis Attributes feature test: ");
    
    if (&a == b) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}
