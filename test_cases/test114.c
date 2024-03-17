
#include <stdio.h>

// Declare function pointer types
typedef void (*print_function)(const char *);
typedef int (*add_function)(int, int);

void print(const char *str) {
    printf("%s\n", str);
}

int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare function pointers and initialize them with functions
    print_function printPtr = &print;
    add_function addPtr = &add;

    // Call the functions through their respective function pointers
    (*printPtr)("Hello, World!");
    printf("Result: %d\n", (*addPtr)(2, 3));

    return 0;
}
