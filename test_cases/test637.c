
#include <stdio.h>

#define MY_MACRO

int main() {
    #ifdef MY_MACRO
        printf("MY_MACRO is defined\n");
    #else
        printf("MY_MACRO is not defined\n");
    #endif
    
    return 0;
}
