
#include <stdio.h>

void print_int(int num) {
    __asm__("movl %0, %%eax\n"
            "addl $48, %%eax\n"
            "pushl %%eax\n"
            : /* no output */
            : "r"(num)
            : "%eax");
}

int main() {
    print_int(10);  // Output should be: 58 ('4' + 10)
    
    return 0;
}
