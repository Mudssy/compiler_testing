
#include <stdio.h>

extern int externalVar;

int main() {
    printf("Value of external variable: %d\n", externalVar);
    return 0;
}
