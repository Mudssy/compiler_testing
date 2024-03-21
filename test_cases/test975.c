
#include <stdio.h>

int main() {
    int a = 5;
    int *p1 = &a;
    int **p2 = &p1;
    
    // Test Case: Dereference once.
    printf("Dereferenced once: %d\n", **p2);
    
    // Test Case: Assign to the dereferenced pointer.
    **p2 = 7;
    printf("Assigned to dereferenced pointer: %d\n", a);
    
    return 0;
}
