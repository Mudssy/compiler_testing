
#include <stdio.h>
#include <assert.h>

void print_value(int value) {
    assert(value >= 0 && value < 10);
    printf("The value is: %d\n", value);
}

int main() {
    int x = 5;
    int y = -1;
    
    // This will pass the assertion because 5 is in range [0, 10)
    print_value(x);
    
    // This will fail the assertion because -1 is not in range [0, 10)
    print_value(y);
    
    return 0;
}
