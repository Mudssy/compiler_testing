
#include <stdio.h>

int main() {
    printf("This is an example of using #include with a specific path.\n");
    
    /* The next line will generate a compiler error if usrinclude is not supported. */
    #ifndef TEST_CASE
        #error "The specified file does not exist!"
    #else
        printf("Test case passed!\n");
    #endif

    return 0;
}
