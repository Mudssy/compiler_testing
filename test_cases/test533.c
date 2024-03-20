
#include <stdio.h>

int main() {
    printf("Executing __builtin_trap().\n");
    __builtin_trap();
    
    // This code will never be reached as the program will terminate above due to trap operation.
    printf("This line should not be printed because of undefined behavior after using __builtin_trap()!\n");
    return 0;
}
