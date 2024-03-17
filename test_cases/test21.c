
#include <stdio.h>

int g_var = 5; // Global Variable

void print() {
    int f_var = 10; // Function Variable

    printf("Global variable from main function is %d\n", g_var);
    
    printf("Inside block\n"); 
    for(int b_var=15; b_var<20; ++b_var) { // Block Variable
        printf("Block local variable: %d, Function local variable: %d \n", b_var, f_var);
        if (b_var < 17) {
            int b_inner = 50; // Inner Block Variable
            printf("Inner block local variable: %d\n", b_inner);
        } else {
            printf("Outside the inner block scope\n");
        }
    }
    
    printf("Function ended\n");
}

int main() {
    print();
    return 0;
}
