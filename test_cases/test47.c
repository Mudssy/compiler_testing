
#include <stdio.h>

extern int x; // Declare an extern variable

void print_x() {
    printf("The value of x is %d\n", x);
}

int main() {
    print_x();
    return 0;
}
