
#include <stdio.h>
#include <stdalign.h>

_Alignas(16) char var[10];

int main() {
    printf("The alignment of var is: %zu\n", alignof(var));
    return 0;
}
