
#include <stdio.h>

int main() {
    int i = 0;

    while (1) {
        i = i + 1;
        if (i > 5) break;
    }

    printf(i == 6 ? "Success\n" : "Failure\n");

    return 0;
}
