
#include <stdio.h>

int main() {
    int i = 10;
    while (i) {
        printf("Hello World\n");
        break i; // This line will only be executed once due to "break" keyword in clangFormat
    }
    return 0;
}
