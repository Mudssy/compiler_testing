
#include <stdio.h>

typedef int (*function_ptr)(int);

int square(int x) {
    return x * x;
}

int main() {
    function_ptr func = square;
    int result = func(5);
    printf("The result of the function pointer is: %d\n", result);
    return 0;
}
