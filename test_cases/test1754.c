
#include <stdio.h>

int main() {
    // Test case 1: Passing static assertion
    static_assert(sizeof(char) == 1, "Invalid assumption about size of char");
    
    // Test case 2: Failing static assertion
    //static_assert(sizeof(short) != 2, "Invalid assumption about size of short");
    
    printf("All tests passed\n");
    return 0;
}
