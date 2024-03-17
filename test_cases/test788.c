
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    if((a > b) && (a > 2 * b)) {
        printf("Both conditions are true\n");
    } else if((a < b) || (a < 2 * b)) {
        printf("At least one condition is true\n");
    } else {
        printf("None of the conditions are true\n");
    }

    return 0;
}
