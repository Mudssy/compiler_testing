
#include <stdio.h>

int main(void) {
    // Check if 'unused' attribute exists
    if (__has_attribute(unused)) {
        printf("Unused attributes supported\n");
        return 0;
    } else {
        printf("Unused attributes not supported\n");
        return 1;
    }
}
