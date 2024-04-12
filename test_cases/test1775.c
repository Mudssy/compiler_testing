
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    _Bool boolValue = true;
    
    printf("_Bool is %lu bytes\n", sizeof(_Bool));
    printf("boolean value: ");
    
    if (boolValue) {
        printf("true");
    } else {
        printf("false");
    }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
