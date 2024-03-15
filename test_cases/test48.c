
#include <stdio.h>

int counter() {
    static int count = 0; // Declare a static variable inside the function.
    return count++;       // Increment and return the value of count.
}

int main() {
    for(int i = 0; i < 5; i++) {
        printf("counter(): %d\n", counter());
    }
    return 0;
}
