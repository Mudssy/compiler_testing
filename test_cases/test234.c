
#include <stdio.h>

int main() {
    // Define some test cases here
    int test = 1;  // Change this value to cause different errors

    if (test == 0) {
        printf("Test case: no error\n");
    } else if (test == 1) {
        #error "Error directive #1"
    } else if (test == 2) {
        #error "Error directive #2"
    } else if (test == 3) {
        #error "Error directive #3"
    } else {
        printf("Test case: no error\n");
    }

    return 0;
}
