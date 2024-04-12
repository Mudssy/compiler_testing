
#include <stdio.h>

int main() {
    int a = 5;
    
    printf("Initial value of 'a': %d\n", a);
    
    // Test increment operator
    a++;
    printf("Value of 'a' after post-increment: %d\n", a);

    // Test decrement operator
    --a;
    printf("Value of 'a' after pre-decrement: %d\n", a);
    
    return 0;
}
