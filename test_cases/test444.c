
#include <stdio.h>

int main() {
    int x = 1;
    int result = ({
        printf("Hello from statement expression\n");
        int y = 2;
        int z = x + y;
        z; // This is the value of the whole block
    });

    printf("Result: %d\n", result); // This should print "Result: 3"
    return 0;
}
