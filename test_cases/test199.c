
#include <stdio.h>

#define NUM1 5
#define NUM2 3

int main(void) {
    #if NUM1 == NUM2
        printf("NUM1 is equal to NUM2\n");
    #elif NUM1 > NUM2
        printf("NUM1 is greater than NUM2\n");
    #else
        printf("NUM1 is less than NUM2\n");
    #endif
    
    return 0;
}
