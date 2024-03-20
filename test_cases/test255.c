
#include <stdio.h>

// Declare a function inside an inline namespace
namespace {
    void foo() {
        printf("This is foo in inline namespace.\n");
    }
}

int main() {
    foo(); // Call the function from the inline namespace
    return 0;
}
