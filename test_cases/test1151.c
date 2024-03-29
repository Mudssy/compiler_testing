
#include <stdio.h>

#define MY_MACRO1 1
// #define MY_MACRO2 2 // Uncomment this line for test case where MY_MACRO2 is defined

int main(void) {
    printf("Testing macros in clang\n");

#ifdef MY_MACRO1
    printf("MY_MACRO1 is defined and its value is %d\n", MY_MACRO1);
#else
    printf("MY_MACRO1 is not defined\n");
#endif

#ifdef MY_MACRO2
    printf("MY_MACRO2 is defined and its value is %d\n", MY_MACRO2);
#else
    printf("MY_MACRO2 is not defined\n");
#endif

    return 0;
}
