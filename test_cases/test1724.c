
#include <stdio.h>

struct s {
    int i;
};

int main() {
    struct s* ps = &(struct s){ .i = 12 };  // Compound literal
    printf("Compound literal value: %d\n", ps->i);

    return 0;  // Return statement to ensure the program doesn't run forever.
}
