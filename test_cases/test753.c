
#include <stdio.h>

typedef struct {
    int x;
    double y;
} my_struct;

my_struct __attribute__ ((aligned (64))) global_var;

int main() {
    printf("Address of global_var: %p\n", &global_var);
    return 0;
}
