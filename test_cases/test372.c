
#include <stdio.h>

int main() {
    int x = 5;
    
    // Declare a pointer to an integer
    int *p = &x;

    printf("Address of x: %p\n", p);  // Prints the address stored in 'p', which should be same as address of 'x'.
    printf("Value at address stored in p (i.e., value of x): %d\n", *p);  // Prints the value pointed to by 'p', i.e., the value of 'x'.
  
    return 0;
}
