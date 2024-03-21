
#include <stdio.h>

// Define the base class
typedef struct {
    int x;
} BaseClass;

// Define the derived class, which inherits from BaseClass (this won't compile with -x c)
typedef struct {
    BaseClass bc;
    int y;
} DerivedClass;

int main() {
    // Create an instance of the derived class
    DerivedClass dc = {{1}, 2};
    
    // Print out the x and y values from the derived class
    printf("x: %d, y: %d\n", dc.bc.x, dc.y);
    
    return 0;
}
