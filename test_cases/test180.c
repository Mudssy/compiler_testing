
#include <stdio.h>

void foo() noexcept {
    // This code should never throw an exception
}

void bar() {
    // This code could potentially throw an exception
}

int main(void) {
    try {
        printf("Calling foo...\n");
        foo();
        printf("No exception thrown from foo.\n");
    } catch (...) {
        printf("Exception thrown from foo.\n");
    }
    
    try {
        printf("\nCalling bar...\n");
        bar();
        printf("No exception thrown from bar.\n");
    } catch (...) {
        printf("Exception thrown from bar.\n");
    }
    
    return 0;
}
