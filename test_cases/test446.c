
#include <stdio.h>

int main() {
    float a[4] = {1.0f, 2.0f, 3.0f, 4.0f};
    float b[4] = {5.0f, 6.0f, 7.0f, 8.0f};
    float result[4];

    for (int i = 0; i < 4; ++i) {
        result[i] = a[i] + b[i];
    }
    
    printf("Vector addition result: %f, %f, %f, %f\n", result[0], result[1], result[2], result[3]);
    return 0;
}
