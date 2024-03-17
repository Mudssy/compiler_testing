
#include <stdio.h>
#include "header1.h"  // header file with 'print_hello' function
#include "header2.h"  // header file with 'print_world' function

int main() {
    print_hello();
    printf(" ");
    print_world();
    printf("\n");
    return 0;
}
