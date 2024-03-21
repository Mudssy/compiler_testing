
#include <stdio.h>

int main() {
    printf("CHECK-LABEL: my_label\n"); // This will be the label we're checking for
    printf("Hello, world!\n"); // The actual output that should match our label
}
