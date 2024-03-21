
#include <stdio.h>

struct my_type { int x; }; // Define a struct type

int main(void) {
    struct my_type obj = { .x = 42 }; // Initialize an object of that type with some value
    printf("%d\n", obj.x); // Print out the field of the struct
}
