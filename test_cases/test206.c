
#include <stdio.h>

int main() {
    printf("#ifndef, #ifdef and #else are used in conditional compilation.\n");
    
    #ifdef TEST_DEFINE  // If this is defined, print out a message
        printf("TEST_DEFINE is defined!\n");
    #elif !defined(SOME_OTHER_DEFINE)  // Else if some other define isn't defined, print this
        printf("SOME_OTHER_DEFINE is not defined! Hello from the else branch.\n");
    #else  // If none of the above are true, then do this
        printf("Neither TEST_DEFINE nor SOME_OTHER_DEFINE is defined. This message should appear if we don't define either of these preprocessor symbols.\n");
    #endif
    
    return 0;
}
