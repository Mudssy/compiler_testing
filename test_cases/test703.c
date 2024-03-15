
#include <stdio.h>

static int staticVar = 42;
int globalVar = 108;

void printVariables() {
    printf("Global Variable: %d\n", globalVar);
    printf("Static Variable: %d\n", staticVar);
}

int main() {
    printVariables();
    return 0;
}
