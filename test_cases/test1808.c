
#include <stdio.h>
#include <stdlib.h>

int* generate_pointer() {
    int local_var = 42; // local variable which goes out of scope
    return &local_var;  // returning address of a local variable
}

void print_value(int* ptr) {
    printf("%d\n", *ptr);
}

int main() {
    int* my_pointer = generate_pointer();
    print_value(my_pointer);
    return 0; // Program ends here, local variable should not be used anymore.
               // If it's used by mistake, undefined behavior will happen.
}
