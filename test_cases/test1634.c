
#include <stdio.h>

// External Linkage
extern int extern_var;
int extern_var = 10;

static int static_func(void) {
    return 20;
}

int main(void) {
    // Testing static linkage in C
    printf("Static function: %d\n", static_func());
    
    // Testing external linkage in C
    extern int extern_var;
    printf("External variable: %d\n", extern_var);
    
    return 0;
}
