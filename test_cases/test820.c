
#include <stdio.h>

typedef struct {
    int x;
    float y;
} CustomType;

int main() {
    CustomType myVar = {42, 3.14};
    printf("Custom type variable: (%d, %.2f)\n", myVar.x, myVar.y);
    return 0;
}
