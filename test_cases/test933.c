
#include <stdio.h>
int main() {
    printf("Testing %%0\n"); // CHECK: %0
    printf("This line shouldn't be printed\n");
    return 0;
}
