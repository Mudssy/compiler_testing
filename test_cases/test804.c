
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 5);
    printf("The sum of 3 and 5 is: %d\n", result);
    return 0;
}
