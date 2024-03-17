
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    
    if (a && b) {
        printf("Both a and b are true.\n");
    } else {
        printf("At least one of a or b is false.\n");
    }

    if (!(a || !b)) {
        printf("!(a || !b) is true.\n");
    } else {
        printf("!(a || !b) is false.\n");
    }

    return 0;
}
