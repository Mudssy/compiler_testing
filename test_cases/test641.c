
#include <stdio.h>

#define HEADER_FILE 1

#ifdef HEADER_FILE
    #include "header.h"
#else
    #include "header2.h"
#endif

int main() {
    printf("The value of x is: %d\n", x);
    return 0;
}
