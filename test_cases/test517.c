
#include <stdio.h>

// Function to test coverage analysis
void foo(int i) {
    if (i > 0)
        printf("Greater than zero\n");
}

int main() {
    foo(-1); // Should not print anything
    foo(5);  // Should print "Greater than zero"
    return 0;
}
