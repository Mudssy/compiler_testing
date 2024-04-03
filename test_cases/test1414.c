
#include <stdio.h>

void function1() {
    printf("Inside Function 1\n");
}

void function2() {
    printf("Inside Function 2\n");
}

int main(void) {
    int i = 0; // This line represents an edge in the control flow.
    if (i == 0) {
        function1(); // This line represents a branching edge in the control flow.
    } else {
        function2(); // This line also represents a branching edge in the control flow.
    }
    return 0; // This line is an edge that returns from main.
}
