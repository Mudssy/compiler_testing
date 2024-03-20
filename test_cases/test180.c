
#include <stdio.h>

void function_throw() noexcept {
    throw 1;
}

int main() {
    try {
        printf("Calling function_throw...\n");
        function_throw();
        printf("This will not be printed.\n");
    } catch (int e) {
        printf("Caught exception: %d\n", e);
    }

    return 0;
}
