
#include <stdio.h>

int global_var = 10;

void modify_global() {
    global_var += 5;
}

int main() {
    printf("Initial value of global variable: %d\n", global_var);
    modify_global();
    printf("After function call, the value of global variable: %d\n", global_var);
    
    return 0;
}
