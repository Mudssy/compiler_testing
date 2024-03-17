
#include <stdio.h>

namespace outer {
    namespace inner {
        int func() {
            return 42;
        }
    }
}

using namespace outer::inner;

int main() {
    printf("The answer is: %d\n", func());
    return 0;
}
