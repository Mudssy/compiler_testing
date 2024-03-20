
#include <stdio.h>

int main() {
    int i = 5;
    
    printf("Initial value of i is %d\n", i); // expected output "Initial value of i is 5"
    
    i++;
    printf("Value of i after increment is %d\n", i); // expected output "Value of i after increment is 6"
    
    i--;
    printf("Value of i after decrement is %d\n", i); // expected output "Value of i after decrement is 5"
    
    return 0;
}
