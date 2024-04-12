
#include <stdio.h>

int ext_var; // Definition of external variable

void function1() {
    ext_var = 5;
}

int main() {
    function1();
    printf("The value of ext_var is: %d\n", ext_var);
    return 0;
}
