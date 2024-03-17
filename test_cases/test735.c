
#include <stdio.h>

void target(void) {
    printf("Target function called.\n");
}

void stub(void) __attribute__((alias("target")));

int main() {
    stub();
    return 0;
}
