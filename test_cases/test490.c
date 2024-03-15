
#include <stdio.h>

extern int externVar;

int main() {
    printf("Externally visible variable value: %d\n", externVar);
    return 0;
}
