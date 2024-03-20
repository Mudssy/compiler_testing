
#include <stdio.h>

typedef struct {
    int x;
    double y;
} SampleStruct;

int main() {
    SampleStruct s = { 10, 20.5 };
    
    printf("SampleStruct: {x=%d, y=%.1f}\n", s.x, s.y);

    return 0;
}
