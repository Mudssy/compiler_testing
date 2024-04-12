
#include <stdio.h>

int main() {
    int x = 5;  // dead store, 'x' goes unused for some reason
    printf("Hello, World!\n");
}
