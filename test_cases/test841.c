
#include <stdio.h>

void restrict_test(int *restrict ptr1, int *restrict ptr2) {
    printf("Value of first pointer: %d\n", *ptr1);
    printf("Value of second pointer: %d\n", *ptr2);
}

int main() {
    int x = 5;
    int y = 10;
    
    restrict_test(&x, &y); // Testing with two different pointers
    
    return 0;
}
