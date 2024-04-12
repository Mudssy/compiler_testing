
#include <stdio.h>

int global_var = 10;
static int static_global_var = 20;

void test() {
    int local_var = 30;
    static int static_local_var = 40;
    
    printf("Global variable: %d\n", global_var);
    printf("Static Global variable: %d\n", static_global_var);
    printf("Local variable: %d\n", local_var);
    printf("Static Local variable: %d\n", static_local_var);
}

int main() {
    test();
    
    return 0;
}
