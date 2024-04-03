
#include <stdio.h>

typedef int (*add_func)(int, int);

// A function that will accept a lambda as a parameter
void add(add_func f) {
    printf("The result of 5 + 3 is %d\n", f(5, 3)); // Call the passed function
}

int main() {
    add((add_func)([](int a, int b) -> int { return a + b; })); // Passing lambda as parameter to function that accepts function pointer. Cast it to our defined type
    return 0;
}
