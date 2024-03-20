
#include <stdio.h>

static void print_local() {
    printf("Inside local function\n");
}

void main() {
    print_local();

    int i;  // loop variable must be outside of the scope for 'for' loop to work in C89
    for (i = 0; i < 1; ++i) {  // only run once so that we can test return from function
        void print_inside() {
            printf("Inside inside block\n");
        }
        print_inside();
    }
}
