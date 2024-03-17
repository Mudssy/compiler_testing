
#include <stdio.h>

int global_var = 10;

void func() {
    static int static_var = 20;
    int local_var = 30;
    
    printf("Global variable: %d\n", global_var);
    printf("Local variable : %d\n", local_var);
    printf("Static variable: %d\n", static_var);
}

int main() {
    int local_main = 40;
    
    printf("Local variable in main: %d\n", local_main);
    func();
    
    return 0;
}
