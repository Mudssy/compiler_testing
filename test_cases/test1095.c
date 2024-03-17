
#include <stdio.h>

int main() {
    int a = 5;                       // Simple integer declaration and initialization
    float b = 3.14f;                 // Simple float declaration and initialization
    double c = 3.141592653589793238; // Simple double declaration and initialization
    char d = 'A';                   // Simple character declaration and initialization
    char e[] = "Hello, World!";     // Simple string (character array) declaration and initialization

    printf("Integer a: %d\n", a);
    printf("Float b: %.2f\n", b);
    printf("Double c: %.15lf\n", c);
    printf("Character d: %c\n", d);
    printf("String e: %s\n", e);

    return 0;
}
