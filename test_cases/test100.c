
#include <stdio.h>

// Declare a new type called 'count_t' which is based on an unsigned int
typedef unsigned int count_t;

int main() {
    // Declare a variable of the new type
    count_t num = 42;

    printf("The answer to life, the universe, and everything is %u.\n", num);
    return 0;
}
