
#include <stdio.h>

namespace my_space {
    int foo() {
        return 42;
    }
}

int main() {
    namespace alias = my_space;
    printf("The answer is: %d\n", alias::foo());
    return 0;
}
