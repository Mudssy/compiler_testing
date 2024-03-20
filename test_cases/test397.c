
#include <stdio.h>

int main() {
    int x = 10; // Variable declared inside the block
    printf("%d\n", x); // Prints 10 as expected
    
    if (x == 10) {
        int x = 20; // Another variable also named 'x' but only within this block
        printf("%d\n", x); // Prints 20 because it's accessing the inner most 'x'
    }

    printf("%d\n", x); // This should still print 10 as we are outside of the inner block where 'x' was declared with value 20
    
    return 0;
}
