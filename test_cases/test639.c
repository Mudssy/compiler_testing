
#include <stdio.h>

// Include our custom header file that defines the macro "MY_NUM"
#ifndef MY_NUM  // If MY_NUM is not defined, define it here with a value of 10
    #define MY_NUM 10
#endif

int main() {
    printf("The value of MY_NUM is: %d\n", MY_NUM);
    
    return 0;
}
