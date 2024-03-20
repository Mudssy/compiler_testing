
#include <stdlib.h>
#include <stdio.h>

// Define a clean-up function for the attribute
void my_exit1(void) { printf("my_exit1()\n"); }
void my_exit2(void) { printf("my_exit2()\n"); }

int main(void) {
    at_quick_exit(my_exit1);
    at_quick_exit(my_exit2);

    quick_exit(0); // Quick exit does not call the clean-up functions.
}
