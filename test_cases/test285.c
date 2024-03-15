
#include <stdio.h>

int main() {
    int a[10] = {0};
    int i;

    for (i = 0; i < 10; ++i) {
        a[i] += i;
    }

    printf("Profile-guided optimization test:\n");

    for (i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}
