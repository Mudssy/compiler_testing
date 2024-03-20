
#include <stdio.h>

__attribute__((warn_unused_result))
static int functionWithAttribute(void) {
    return 42;
}

int main() {
    printf("Running the program...\n");
    
    // Calling the function but not using its result.
    (void)functionWithAttribute();

    printf("Program terminated.\n");
    return 0;
}
