
#include <stdio.h>

void noexcept_function() noexcept {
    printf("Function marked as noexcept.\n");
}

int main() {
    try {
        noexcept_function();
    } catch(...) {
        printf("Exception caught in main function.\n");
    }
    return 0;
}
