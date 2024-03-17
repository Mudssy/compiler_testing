
#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;
    if (a > b) {
        printf("Missed optimization: a is greater than b.\n");
    } else {
        printf("a is not greater than b.\n");
    }
    return 0;
}
