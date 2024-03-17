
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT (~a): %d\n", ~a);
    printf("Bitwise NOT (~b): %d\n", ~b);
    
    printf("Logical AND: %d\n", a && b);
    printf("Logical OR: %d\n", a || b);
    printf("Logical NOT (!a): %d\n", !a);
    printf("Logical NOT (!b): %d\n", !b);
    
    printf("Shift Left: %d\n", a << b);
    printf("Shift Right: %d\n", a >> b)
    To test these sections of the compiler, you can create a simple program that includes each of these operations with two variables 'a' and 'b'. Make sure to include necessary headers like stdio.h and use correct format specifiers in printf functions for different operations.

