
#include <stdio.h>

void print_value(int* ptr) {
    if (ptr != NULL) {
        printf("The value is: %d\n", *ptr);
    } else {
        printf("The pointer is null.\n");
    }
}

int main() {
    int value = 10;
    print_value(&value);  // This should print "The value is: 10"
    
    int* nullPtr = NULL;
    print_value(nullPtr);  // This should print "The pointer is null."
    
    return 0;
}
