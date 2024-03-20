
#include <stdio.h>

void print_recursive(int n) {
    if (n <= 0) return;
    
    printf("%d ", n);
    print_recursive(n - 1);
}

int main() {
    print_recursive(5);
    return 0;
}
