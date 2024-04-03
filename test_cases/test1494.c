
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    
    (a = a + 5, b = b - 5); // Using the comma operator to modify both a and b
    
    printf("a: %d\n", a); // Prints out the new value of a
    printf("b: %d\n", b); // Prints out the new value of b
    
    return 0;
}
