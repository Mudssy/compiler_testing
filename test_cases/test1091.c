
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[5];

    for(int i=0; i<5; i++) {
        b[i] = a[4-i];
    }

    for(int i=0; i<5; i++) {
        printf("b[%d]: %d\n", i, b[i]);
    }

    return 0;
}
