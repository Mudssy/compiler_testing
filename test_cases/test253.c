
#include <stdio.h>
#include <stdalign.h>

_Alignas(16) int var;

int main() {
    printf("Address of var: %p\n", (void *) &var);
    printf("Alignment of var: %zu\n", alignof(var));
    return 0;
}
