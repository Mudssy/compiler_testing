
#include <stdio.h>

#ifdef MY_MACRO
void printMyMacro() {
    printf("MY_MACRO is defined.\n");
}
#else
void printMyMacro() {
    printf("MY_MACRO is not defined.\n");
}
#endif

int main(void) {
    printMyMacro();
    return 0; // Returning from the program to avoid runaway behaviour.
}
