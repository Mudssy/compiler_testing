
#include <stdio.h>

int main() {
    #ifdef TEST_ERROR
        #error "This compiler does not support error"
    #else
        printf("This compiler supports error\n");
    #endif
    
    return 0;
}
