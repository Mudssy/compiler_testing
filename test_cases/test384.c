
#include <stdio.h>

extern int ext_var; // Declaration of external variable
int main() {
    printf("Value of externally defined variable: %d\n", ext_var);
    return 0;
}
