
#include <stdio.h>

void __attribute__((weak)) featureNotSupported(void);  // Declare a weak symbol

int main() {
    if (&featureNotSupported) {
        printf("Feature supported\n");
    } else {
        printf("Feature not supported\n");
    }
    return 0;
}
