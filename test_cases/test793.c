
#include <stdio.h>

int main() {
    int i, j;
    
    // Test 1: Comma operation in initialization
    printf("Test 1:\n");
    for (i = 0, j = 5; i < 5; i++) {
        printf("%d\n", i);
    }
    
    // Test 2: Comma operation in condition check
    printf("\nTest 2:\n");
    for (i = 0, j = 5; i < j; i++, j--) {
        printf("%d %d\n", i, j);
    }
    
    // Test 3: Comma operation in function parameters
    printf("\nTest 3:\n");
    for (i = 0, j = 5; i < 5; i++) {
        print_two(printf("The number is %d ", i), putchar('\n'));
    }
    
    return 0;
}
