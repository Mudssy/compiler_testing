
#include <stdio.h>

struct point { double x, y; };

int main() {
    struct point p = { .x = 12.0, .y = 4.5 };
    
    if (p.x != 12.0 || p.y != 4.5) {
        printf("Designated initializers not working\n");
        return 1; // Indicates that the test failed
    } else {
        printf("Designated initializers working\n");
        return 0; // Indicates that the test passed
    }
}
