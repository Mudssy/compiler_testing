
#include <stdio.h>

void print_value(int value) {
    printf("Value: %d\n", value);
}

int main() {
    int value = 42;
    
    // Testing function call arguments breaking feature
    print_value
        (value);
    
    return 0;
}
