
#include <stdio.h>

int main() {
    char array[] = "Testing Character Arrays in LLVM Build Section";

    for (int i = 0; array[i] != '\0'; ++i) {
        putchar(array[i]);
    }

    return 0;
}
