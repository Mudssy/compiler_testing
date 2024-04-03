
#include <stdio.h>

void printVec(int* vec, int len) {
    printf("[ ");
    for (int i = 0; i < len; ++i)
        printf("%d ", vec[i]);
    printf("]\n");
}

int main() {
    int vec2[] = {1, 2}; // Your input values here
    
    printVec(vec2, sizeof(vec2)/sizeof(*vec2));

    return 0;
}
