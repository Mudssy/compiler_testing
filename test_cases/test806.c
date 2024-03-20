
#include <stdio.h>

void print_numbers(int n) {
    if (n < 0) { // Base case for the recursion
        return;
    } else {
        printf("%d\n", n);
        print_numbers(n-1);  // Recursive call
    }
}

int main() {
    int n = 5;
    print_numbers(n);
    return 0;
}
