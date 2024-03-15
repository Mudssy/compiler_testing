
#include <stdio.h>

int main() {
    _Bool a = 1;
    _Bool b = 0;

    if (a && b) {
        printf("Both are true\n");
    } else if (!a && !b) {
        printf("Both are false\n");
    } else if (a || b) {
        printf("One of them is true\n");
    } else {
        printf("Something went wrong...\n");
    }

    return 0;
}
