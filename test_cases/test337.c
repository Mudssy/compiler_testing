
#include <stdio.h>

typedef struct {
    float x;
    char padding[12];
    int y;
} PaddedVector;

int main() {
    PaddedVector vec = { 3.14f, {0}, 42 };
    printf("Size of padded vector: %zu\n", sizeof(vec));
    
    if (sizeof(vec) == sizeof(float) + sizeof(char) * 12 + sizeof(int)) {
        printf("Padding correctly applied.\n");
    } else {
        printf("Padding not correctly applied.\n");
    }

    return 0;
}
