
#include <stdio.h>

// File scope variable.
int file_scope_var;

void doSomething() {
    // File-scope variables are initialized with zero by default, so this line will print "0".
    printf("%d\n", file_scope_var);
    
    // Changing the value of the variable does not change the original because it's a copy.
    file_scope_var = 42;
}

int main() {
    doSomething();  // First call to demonstrate how static variables maintain state.

    printf("%d\n", file_scope_var);  // This will print "0". The changes made in doSomething() are local and don't affect this scope.

    doSomething();  // Second call to demonstrate how static variables maintain state.

    return 0;
}
