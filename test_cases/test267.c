
#include <stdio.h>

int main(void) {
    #if __STDC_VERSION__ >= 201710L
        printf("We are using C18!\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("We are using C11!\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("We are using C99!\n");
    #else
        printf("We are using an older version of C.\n");
    #endif
    return 0;
}
