
#include <stdio.h>

int main() {
    printf("This is an example of using #include with a specific path.\n");
    
    /* The next line will generate a compiler error if usrinclude is not supported. */
    #ifdef TEST_CASE
        printf("Test case passed!\n");
    #else
        printf("The specified file does not exist! Test failed.\n");
    #endif

    return 0;
}
