
#include <stdio.h>

int main() {
    int i = 5;

    #ifdef __clang__
        printf("You are using clang.\n");
    #else
        printf("You are not using clang.\n");
    #endif

    if (i == 1) 
        printf("i is 1\n");
    else if (i == 2)
        printf("i is 2\n");
    #ifdef __clang__
    else if (i == 5)
        printf("i is 5\n");
    #endif
        
    return 0;
}
