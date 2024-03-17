
#include <stdio.h>

extern int external_variable = 42;
int internal_variable = 108;

void display_variables() {
    printf("external_variable: %d\n", external_variable);
    printf("internal_variable: %d\n", internal_variable);
}

int main() {
    display_variables();
    return 0;
}
