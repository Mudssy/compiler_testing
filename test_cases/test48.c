
#include <stdio.h>

void counter(int add) {
    // Static variable used to count the number of times this function is called
    static int count = 0;
    count += add;
    printf("Counter: %d\n", count);
}

int main() {
    for (int i=1; i<=5; ++i) {
        counter(i);
    }
    return 0;
}
