
#include <stdio.h>

int main() {
    // Check if the refactoring of global variables into scoped blocks is supported
    int i = 10;  // This should be a global variable in clanglibRewrite, otherwise it will not compile
    printf("Global variable 'i' has value: %d\n", i);
    
    return 0;
}
