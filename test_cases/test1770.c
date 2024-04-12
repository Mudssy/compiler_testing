
#include <stdio.h>

int main(void) {
    struct point { int x; int y; };

    // Declare and initialize a struct using designated initializers
    struct point p = { .x = 10, .y = 5 };
    
    // Print the values of the struct members
    printf("Point: (%d, %d)\n", p.x, p.y);

    int arr[2] = { [0 ... 1] = 42 };

    for(int i=0;i<2;i++) {
        printf("%d ", arr[i]);   // Will print: "42 42"
    }
    
    return 0;
}
