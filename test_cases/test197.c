
#include <stdio.h>

#define FOO 1

int main() {
    #ifdef FOO
        printf("FOO is defined\n");
    #endif

    #ifndef BAR
        printf("BAR is not defined\n");
    #else
        printf("BAR is defined\n");
    #endif

    #if defined(FOO) || (2 > 1)
        printf("This line will print because FOO is defined and 2 > 1\n");
    #elif defined(BAZ) && (1 > 2)
        printf("This line won't print, even though BAZ is undefined, because the preceding condition evaluated to false\n");
    #endif
    
    #define CONCATENATE(a, b) a##b
    int xy = 5;
    printf("%d\n", CONCATENATE(x, y));  // print "5"

    return 0;
}
