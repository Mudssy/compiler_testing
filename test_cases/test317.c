
#include <stdio.h>

_Nullable int *getNull() { return NULL; }

void testAuditRegion(int _Nonnull (*foo)(void)) {
    if (foo()) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
}

int main(void) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
    testAuditRegion(getNull);
#pragma clang diagnostic pop
    return 0;
}
