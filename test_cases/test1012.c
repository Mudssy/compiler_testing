
#include <stdio.h>

namespace my_namespace {
    int my_var = 42;  // A variable inside the namespace
}

using namespace my_namespace;

int main() {
    printf("Value of my_var = %d\n", my_var);
    return 0;
}
