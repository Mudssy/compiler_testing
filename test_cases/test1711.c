
#include <stdio.h>

int main() {
    if (__has_feature(objc_arc) || __has_extension(attribute(objc_runtime))) {
        printf("Inline Assembly is supported.\n");
    } else {
        printf("Inline Assembly is not supported.\n");
    }

    return 0;
}
