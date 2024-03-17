
#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE
} Color;

const char* color_names[] = {
    "RED", 
    "GREEN", 
    "BLUE"
};

int main() {
    for (Color i = 0; i < 3; ++i) {
        printf("%s\n", color_names[i]);
    }
    return 0;
}
