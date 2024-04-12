
#include <stdlib.h>
#include <alloca.h>

int main() {
    char *ptr = alloca(1024 * 1024 * 1024); // should trigger an error for stack size exceeding limit

    if (ptr != NULL) {
        return 1; // This indicates that the allocation succeeded, which is a successful test.
    } else {
        return 0; // This indicates failure.
    }
}
