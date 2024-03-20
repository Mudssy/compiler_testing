
#include <stdio.h>

void my_cleanup(void) {
    printf("Clean up function executed\n");
}

int main() {
    void (*volatile destructor)(void);

    destructor = &my_cleanup;
    destructor(); // Force the clean-up function to run

    return 0;
}
