
#include <stdio.h>

int main() {
    int a[1024];
    for (int i = 0; i < 1024; ++i) {
        a[i] = i * 2;
    }

    for (int i = 0; i < 1024; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}
