
#include <stdio.h>

// File scope variable.
int file_scope_var = 10;  

// Static variable. It's value is maintained between function calls.
static int static_var = 20; 

// External variable, defined somewhere else (not in this .c file) and brought into this scope via an extern declaration.
extern int external_var;

void doSomething() {
    // Access a 'file scope' variable.
    printf("%d\n", file_scope_var);  

    // Access a  static variable. It's value is maintained between function calls.
    printf("%d\n", static_var++);    

    // Access an external variable.
    printf("%d\n", external_var);      
}

int main() {
    doSomething();
    doSomething();  // Second call to demonstrate how static variables maintain state.

    return 0;
}
