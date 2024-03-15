
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    printf("Initial values: a = %d, b = %d\n", a, b);
    
    a += b; // Test addition assignment
    printf("After 'a += b': a = %d, b = %d\n", a, b);
    
    a -= b; // Test subtraction assignment
    printf("After 'a -= b': a = %d, b = %d\n", a, b);
    
    a *= b; // Test multiplication assignment
    printf("After 'a *= b': a = %d, b = %d\n", a, b);
    
    a /= b; // Test division assignment
    printf("After 'a /= b': a = %d, b = %d\n", a, b);
    
    a %= b; // Test modulo assignment
    printf("After 'a %%= b': a = %d, b = %d\n", a, b);
    
    return 0;
}
