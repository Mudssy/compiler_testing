
#include <stdio.h>

void print_generic(_Generic(x) int x : (printf("It's an integer\n")), double x : (printf("It's a float\n")));

int main() {
    print_generic(5);     // Output: It's an integer
    print_generic(1.0);   // Output: It's a float
    return 0;
}
