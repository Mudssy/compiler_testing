
#include <stdio.h>

extern int ext_var; // external linkage variable
static int stat_var = 42; // internal linkage variable

int func1(void) { return 10; } // external linkage function
static int func2(void) { return 20; } // internal linkage function

int main() {
    printf("External variable: %d\n", ext_var);
    printf("Internal variable: %d\n", stat_var);
    
    printf("External function: %d\n", func1());
    printf("Internal function: %d\n", func2());

    return 0;
}
