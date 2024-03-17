
#include <stdio.h>
typedef void (*function_ptr)(void);

typedef struct _class {
    int variable;
    function_ptr instance_method;
} Class;

// Define a method for the class
void method(Class* self) {
    printf("Variable value: %d\n", self->variable);
}

int main() {
    // Instantiate the class and call the method
    Class c = { .variable = 42, .instance_method = &method };
    (c.instance_method)(&c); // Expected output: "Variable value: 42"
    return 0;
}
