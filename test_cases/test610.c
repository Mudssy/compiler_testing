
#include <stdio.h>
#include <stdlib.h>

void print_output(void *ptr) {
    int *int_ptr = (int *) ptr;
    printf("Value: %d\n", *int_ptr);
}

int main() {
    int val = 42;
    void *void_ptr = &val;

    print_output(void_ptr);

    return 0;
}
