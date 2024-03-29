
#include <stdio.h>

int main() {
    #ifdef __STDC_VERSION__ // checking if __STDC_VERSION__ macro is defined or not
        if(__STDC_VERSION__ >= 201112L) // Checking whether the version of C standard used is C99 or greater.
            printf("csin is supported\n");
        else 
            printf("csin is NOT supported\n");
    #else
        printf("This compiler does not support __STDC_VERSION__ macro\n");
    #endif
    
    return 0;
}
