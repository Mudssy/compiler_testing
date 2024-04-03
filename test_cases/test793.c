
#include <stdio.h>

void print_two(int i, char c) {  /* print two integers */
    printf("%d\n", i);
}

int main() {
    int i, j;
    
    // Test 1: Comma operation in initialization list
    for (i = 0, j = 0; i < 2 && !j++; ++i)
        print_two(printf("The number is %d ", i), putchar('\n'));
    
    return 0;
}
