
#include <stdio.h>

typedef struct {
    int a;
    float b;
} StructType;

int main() {
    StructType arr[2] = {
        {1, 2.0},
        {3, 4.0}
    };

    for (int i = 0; i < 2; ++i) {
        printf("arr[%d].a: %d\n", i, arr[i].a);
        printf("arr[%d].b: %.1f\n", i, arr[i].b);
    }

    return 0;
}
