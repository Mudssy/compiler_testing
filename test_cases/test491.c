
#include <stdio.h>

int function_to_test() {
    int covered = 0;
    int not_covered = 1;

    if (covered) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    printf("Result: %d\n", function_to_test());
    return 0;
}
