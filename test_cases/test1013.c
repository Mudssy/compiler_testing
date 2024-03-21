
#include <stdio.h>

typedef struct {
    int x;
} MyClass;

int main() {
    MyClass myObject = { .x = 10 };
    printf("The value of x is: %d\n", myObject.x);
    
    return 0; // This line ensures the program does not run forever, returning control to the operating system.
}
