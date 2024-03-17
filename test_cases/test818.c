
#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("This function has been called %d times.\n", count);
}

int main() {
    for (int i = 0; i < 5; i++) {
        counter();
    }
    return 0;
}
