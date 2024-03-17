
#include <stdio.h>

int global_variable = 10;

void printGlobalVariable() {
    printf("The value of global_variable is %d\n", global_variable);
}

int main(void) {
    printGlobalVariable();
    return 0;
}
