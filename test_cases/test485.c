
#include <stdio.h>
#include <stdlib.h>

__attribute__((optimize("O2"))) 
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 20);
    printf("Result: %d\n", result);
    return 0;
}
