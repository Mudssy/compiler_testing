
#include <stdio.h>

// Global variable defined in the global file scope
int x = 10; 

void print_global_x() {
    printf("Global Variable x: %d\n", x);
}

void change_global_x(int value) {
    // Local variable with same name as global variable, shadows it.
    int x = value;
    
    printf("\tLocal Variable x: %d\n", x);
}

int main() {
    print_global_x();
    change_global_x(5);
    return 0;
}
