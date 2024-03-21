
#include <stdio.h>

void print_outer() {
    printf("Printing from the outer function.\n");

    void print_inner() {
        printf("Printing from the inner function.\n");
    }
    
    print_inner();
}

int main() {
    print_outer();
    return 0;
}
