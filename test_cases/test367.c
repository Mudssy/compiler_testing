
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("Hello, World! %d\n", i);
        ++i;
        if (i > 10) break;  // Terminate the loop after 10 iterations
    } while(1);
    return 0;
}
