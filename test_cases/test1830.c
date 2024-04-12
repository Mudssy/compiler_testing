
#include <stdio.h>

int main() {
    enum Color {RED=18, BLUE};  // This is an example of misusing enums where the value RED is explicitly initialized with 18.
    
    printf("Value of enum: %d\n", RED);  // Expecting to see 18 as output

    return 0;
}
