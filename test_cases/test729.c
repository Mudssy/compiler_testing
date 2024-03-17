
#include <stdio.h>

void __attribute__((noreturn)) no_return_func(int a) {
    printf("This function will never return. Input: %d\n", a);
}

int main() {
    int a = 5;
    no_return_func(a);
    
    // This line should not be executed as the function above is marked noreturn.
    printf("This message should never be printed.\n");
    return 0;
}
