
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("%d ", i);
        if (i == 2) {
            continue;
        }
        i++;
    }
    return 0;
}
