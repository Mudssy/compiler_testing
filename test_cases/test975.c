
#include <stdio.h>

int global_var = 42;

void function(int *ptr) {
    *ptr = 13;
}

int main() {
    int a = 5, b = 7;
    printf("Initial values: a = %d, b = %d\n", a, b);
    
    if (&a != &b) {
        function(&a);
        printf("After function call with 'a': a = %d, b = %d\n", a, b);
        
        function(&global_var);
        printf("After function call with 'global_var': a = %d, global_var = %d\n", a, global_var);
    }
    
    return 0;
}
