
#include <stdio.h>

#define MY_MACRO 1

int main() {
    #if MY_MACRO > 0
        printf("MY_MACRO is greater than zero.\n");
    #else
        printf("MY_MACRO is not greater than zero.\n");
    #endif

    return 0;
}
