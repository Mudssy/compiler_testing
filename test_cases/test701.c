
#include <stdio.h>

__attribute__((annotate("example_annotation")))
void annotatedFunction(void) {
    printf("This function is annotated.\n");
}

int main() {
    annotatedFunction();
    return 0;
}
