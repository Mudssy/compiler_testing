
#include <stdio.h>

int main() {
    if (__builtin_trap()) { // This will always trigger a compiler error
        printf("Error!\n");
    } else {
        printf("No error detected!\n");
    }
    return 0;
}
