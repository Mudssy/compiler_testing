
#include <stdio.h>

struct Point { int x; int y; };

int main() {
    struct Point* p = &(struct Point){10, 20}; // Serialized compound literal
    
    printf("X: %d\n", p->x); // Prints: X: 10
    printf("Y: %d\n", p->y); // Prints: Y: 20
    
    return 0; // Returns to end the program
}
