
#include <stdio.h>

_Noreturn void myFunc() {
    printf("Running in noreturn function.\n");
    while (1) {} // Infinite loop to avoid returning
}

int main() {
    myFunc();
    return 0;
}
