
#include <stdio.h>

int main() {
    int condition = 1;   // Change this value to test different conditions

    if (__builtin_expect(condition, 1)) {
        printf("Branch 1\n");
    } else {
        printf("Branch 2\n");
    }

    return 0;   // Make sure the program returns and does not run forever.
}
