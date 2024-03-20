
#include <stdio.h>

#define MY_MACRO "Hello from macro"

int main() {
    #ifdef MY_MACRO
        printf("%s\n", MY_MACRO);
    #else
        printf("MY_MACRO is not defined.\n");
    #endif
    
    return 0;
}
