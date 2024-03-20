
#include <stdio.h>
#define SHUFFLE2(a, b) __builtin_shuffle((vector unsigned int){0, 1}, (vector unsigned int){a, b})
#define SHUFFLE4(a, b, c, d) __builtin_shuffle((vector unsigned int){0, 1, 2, 3}, (vector unsigned int){a, b, c, d})

int main() {
    vector unsigned int v = (vector unsigned int){1, 2, 3, 4};
    
    // Testing SHUFFLE2.
    v = SHUFFLE2(v, 0);
    printf("SHUFFLE2: {%d, %d}\n", v[0], v[1]);

    // Testing SHUFFLE4.
    v = SHUFFLE4(v, 3, 2, 1);
    printf("SHUFFLE4: {%d, %d, %d, %d}\n", v[0], v[1], v[2], v[3]);
    
    return 0;
}
