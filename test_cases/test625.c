
#include <stdio.h>

struct TestStruct {
    int x;
    float y;
};

int main() {
    struct TestStruct ts = {10, 20.5f};
    
    printf("ts.x: %d\n", ts.x);
    printf("ts.y: %.1f\n", ts.y);

    return 0;
}
