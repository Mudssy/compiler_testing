
#include <stdio.h>

int main() {
    int sum = 0;
    int n;

    for (n = 1; n <= 20; ++n) {
        sum += n * n;
    }

    printf("The sum of squares from 1 to 20 is: %d\n", sum);
    return 0;
}
