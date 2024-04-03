
#include <stdio.h>

// A static global variable
int x = 5;

void print_storage() {
    // A local static variable
    static int y = 10;
    
    printf("x: %d, y: %d\n", x, y);
}

int main() {
    // Change the value of x and call print_storage to display the current values
    x = 7;
    print_storage();
    
    return 0;
}
