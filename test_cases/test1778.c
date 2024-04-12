
#include <stdio.h>

struct Point { int x, y; };

int main() {
    struct Point p = (struct Point){ .x = 3, .y = 4 };
    
    printf("Point: (%d, %d)\n", p.x, p.y);  // Outputs: "Point: (3, 4)"

    int arr[2] = (int[2]){ p.x, p.y };

    printf("Array: {%d, %d}\n", arr[0], arr[1]);  // Outputs: "Array: {3, 4}"
    
    return 0;
}
