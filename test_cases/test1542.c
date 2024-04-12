
#include <stdio.h>

int main() {
    if (__STDC_VERSION__ >= 201710L)
        printf("The compiler supports C18!\n");
    else if (__STDC_VERSION__ >= 201112L)
        printf("The compiler supports C11!\n");
    else if (__STDC_VERSION__ >= 199901L)
        printf("The compiler supports C99!\n");
    else
        printf("The compiler does not support any version of C after C89!\n");
        
    return 0;
}
