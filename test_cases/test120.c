
#include <stdio.h>

struct foo {
    int x;
    double y;
};

int main() {
    // Initializer list for a struct
    struct foo f = {10, 3.14};
    
    printf("f.x: %d\n", f.x);
    printf("f.y: %lf\n", f.y);
    
    return 0;
}
