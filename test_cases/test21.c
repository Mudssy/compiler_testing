
#include <stdio.h>

int global_var = 10;

void func() {
    int local_func_var = 20;
    static int static_func_var = 30;
    printf("Inside function: \n");
    printf("\tLocal Variable: %d\n", local_func_var);
    printf("\tStatic Variable: %d\n", static_func_var++);
}

int main() {
    int local_main_var = 40;
    static int static_main_var = 50;
    printf("Inside Main: \n");
    printf("\tLocal Variable: %d\n", local_main_var);
    printf("\tStatic Variable: %d\n", static_main_var++);

    func();
    return 0;
}
