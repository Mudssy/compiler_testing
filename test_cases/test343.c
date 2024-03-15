
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};
    int c[6];
    for (int i = 0; i < 3; ++i) {
        c[i*2] = a[i];
        if(i < 2) {
            c[i*2+1] = b[i];
        } else {
            c[5] = b[i];
        }
    }

    for (int i = 0; i < 6; ++i) {
        printf("%d ", c[i]);
    }
    return 0;
}
