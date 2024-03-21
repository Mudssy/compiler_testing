
#include <stdio.h>

int global_var;   // This variable has external linkage by default
static int file_scope_var = 20;    // This variable has internal linkage

void func(void) {
    static int func_scope_var = 30;     // This variable retains its value across function calls, but is only visible in this function.
    printf("%d\n", func_scope_var++);   // Outputs 30 then increments to 31 on the next call.
}

int main(void) {
    static int main_scope_var = 40;     // This variable retains its value across function calls, but is only visible in this function.
    extern int external_var;             // A declaration for an entity defined elsewhere.

    printf("%d\n", global_var);          // Outputs 0 (the default value of a global or static variable)
    printf("%d\n", file_scope_var);      // Outputs 20
    printf("%d\n", main_scope_var++);    // Outputs 40 then increments to 41 on the next call.
    printf("%d\n", external_var);        // This is undefined behavior if this variable hasn't been defined elsewhere in the program.

    func();      // Call function
    func();      // Call again (notice that 'func_scope_var' retains its value)

    return 0;    
}
