
#include <stdio.h>
int main() {
    printf("Executing __builtin_trap().\n");
    __builtin_trap(); // This statement stops further execution of your program and you can debug it using a debugger.
    printf("This won't get printed since the execution is stopped due to trap instruction.\n");
    return 0;
}
