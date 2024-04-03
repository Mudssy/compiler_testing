
#include <stdio.h>

int my_var;  // Declare the variable without assigning it a value.

void my_namespace() {
    int my_var = 42;   // A variable inside the namespace
    printf("Value of my_var = %d\n", my_var);
}

int main() {
    my_namespace();  // Accessing the "variable" in the namespace.
    return 0;
}
