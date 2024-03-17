
#include <stdio.h>
#include <stddef.h>

typedef struct {
    int a;
    int b;
} StructType;

int main() {
    StructType arr[2] = {{1, 2}, {3, 4}};
    
    for (size_t i = 0; i < sizeof(arr) / sizeof(StructType); ++i) {
        printf("Element %zu: a = %d, b = %d\n", i, arr[i].a, arr[i].b);
    }
    
    return 0;
}
