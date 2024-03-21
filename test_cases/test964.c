
#include <stdio.h>

void foo() {
    printf("This function is not covered by tests.\n");
}

int main() {
    int i = 0;
    ++i; // This line is covered
    if (i > 5) {
        printf("This line of code is not reachable.\n");
    } else {
        foo(); // This line and function call are not covered
    }
}
