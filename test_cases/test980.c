
#include <stdio.h>

int testFunction(int x) {
    if (x > 50) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    int result = testFunction(60); // Change the value of this to control branching.

    switch (result) {
        case 1:
            printf("Result is greater than 50\n");
            break;
        case 2:
            printf("Result is less than or equal to 50\n");
            break;
        default:
            printf("Unexpected result\n");
    }

    return 0; // Returns immediately and does not run forever.
}
