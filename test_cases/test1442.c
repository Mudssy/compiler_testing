
#include <stdio.h>

int main() {
    int counter = 0;

    // Increment the counter in an infinite loop to test for overflow
    while (1) {
        if (counter == __INT_MAX__) {
            printf("Counter overflow detected\n");
            break;
        }
        counter++;
    }

    return 0;
}
