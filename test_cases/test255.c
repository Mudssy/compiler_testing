
#include <stdio.h>

namespace Outer {
    namespace Inner {
        const char* message = "World";
    }
}

int main() {
    printf("Hello, %s!\n", Outer::Inner::message);
    return 0;
}
