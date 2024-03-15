
#include <stdio.h>

void print_sum(int a, int b) {
    int sum = a + b;
    printf("Sum of %d and %d is: %d\n", a, b, sum);
}

int main() {
    // Testing Compound Statements (Blocks)
    {
        int x = 10;
        int y = 20;
        print_sum(x, y);
    }

    {
        int x = 30;
        int y = 40;
        print_sum(x, y);
    }

    return 0;
}
