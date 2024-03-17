
#include <stdio.h>

// Define a simple inline function
static inline int square(int x) { return x * x; }

int main() {
    // This will be replaced by the compiler with the value 100,
    // and it won't cause any additional overhead at runtime.
    printf("%d\n", square(10));
    return 0;
}
