
#include <stdio.h>

// Static function declaration
static int static_function(int a, int b);

// Inline function declaration
inline int inline_function(int a, int b);

int main() {
    int a = 5;
    int b = 3;
    
    printf("Result of static function: %d\n", static_function(a, b));
    printf("Result of inline function: %d\n", inline_function(a, b));
    
    return 0;
}

// Static function definition
static int static_function(int a, int b) {
    return a + b;
}

// Inline function definition
inline int inline_function(int a, int b) {
    return a * b;
}
