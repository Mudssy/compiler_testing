
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Testing Abort Feature\n");
    abort();
    printf("This line should not be printed.\n");
    return 0;
}
