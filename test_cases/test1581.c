
#include <stdio.h>

void foo(int a, int b) {
    printf("Inside foo function\n");
}

int main() {
    void (*fun_ptr)(int, int);
    fun_ptr = &foo;
    (*fun_ptr)(10, 20);
    
    return 0;
}
