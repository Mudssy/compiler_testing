
#include <stdio.h>

// Define our own namespace as struct
struct MyNamespace {
    int num;
};

// Create an instance of the namespace
static const struct MyNamespace my = { .num = 42 };

namespace { // Using directive
    void print_my_num(void) {
        printf("My number is: %d\n", my.num);
    }
}

// using declaration
using struct MyNamespace;

int main() {
    print_my_num(); // Calling function from an anonymous namespace
    return 0;
}
