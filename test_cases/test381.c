
#include <stdio.h>

void print_numbers(int num) {
    if (num > 0) {
        printf("%d ", num);
        print_numbers(num - 1);
    }
}

int main() {
    print_numbers(5);
    return 0;
}
