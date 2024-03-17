
#include <stdio.h>

int main() {
    int i;
    char str[] = "llvmunittests";

    for (i = 0; str[i] != '\0'; ++i) {
        printf("%c", str[i]);
    }

    return 0;
}
