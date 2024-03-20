
#include <stdio.h>

int x = 10; // Define the extern variable 'x'

void print_x() {
    printf("The value of x is %d\n", x);
}

int main() {
    print_x();
    return 0;
}
