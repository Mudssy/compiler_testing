
#include <stdio.h>

int main(void) {
    int x = 1, y = 2;
    
    (x, y); // Using Comma Operator here

    if (y == 2) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}
