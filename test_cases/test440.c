
#include <stdio.h>

int main(void) {
    int __attribute__((annotate("This is an annotated variable"))) annotated_var = 42;
    printf("The value of the annotated variable is %d\n", annotated_var);
    return 0;
}
