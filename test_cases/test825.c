
#include <stdio.h>

void function_with_local_variable() {
    int local_var = 10;
    printf("Function Scope: Inside function, value of local_var: %d\n", local_var);
}

int main() {
    int global_var = 5;
    
    printf("Global Scope: Inside main, value of global_var: %d\n", global_var);
    function_with_local_variable();
    printf("Global Scope: After calling function, value of global_var: %d\n", global_var);
    
    return 0;
}
