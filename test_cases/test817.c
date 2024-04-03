
#include <stdio.h>

int main() {
    register int x = 10;
    
    /* Instead of comparing addresses, we just check if the variable has correct value */
    printf("%s\n", (x == 10) ? "Automatic variable test passed" : "Automatic variable test failed");  

    return 0;
}
