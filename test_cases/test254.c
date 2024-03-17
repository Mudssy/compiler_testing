
#include <stdio.h>

_Noreturn void myExitFunction(void) {
    printf("Called myExitFunction\n");
}

int main() 
{
    atexit(myExitFunction);
    // This function will never return
    for (;;) {}  

    return 0;  // Will not be executed
}
