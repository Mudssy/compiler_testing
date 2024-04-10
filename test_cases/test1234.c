
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Testing Abort Feature\n");
    abort(); // No need to call exit function after calling abort as it immediately terminates the program.
    printf("This line should not be printed.\n"); 
    return 0;
}
