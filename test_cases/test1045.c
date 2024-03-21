
#include <stdio.h>

void print_spaces(int n) {
    if (n > 0) {
        putchar(' ');
        // Recursively call the function with decremented value
        print_spaces(n - 1);
    }
}

int main() {
    printf("Before spaces:\n");
    print_spaces(20);
    printf("\nAfter spaces.\n");
    return 0;
}
