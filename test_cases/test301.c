
#include <stdio.h>

void print(const char *s) {
    printf("%s\n", s);
}

int main() {
    __asm__ (
        "mov $65, %eax;"  // ascii value of 'A'
        "add $1, %eax;"   // increment by one to get 'B'
        "push %eax;"
        "call print"      // call print function with argument on stack
    );

    return 0;
}
