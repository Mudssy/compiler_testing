
#include <stdio.h>

int main() {
    int (^compound_literal)(void) = (int (^)(void)) ^(void) { return 42; };
    printf("Compound Literals output: %d\n", compound_literal());
    return 0;
}
