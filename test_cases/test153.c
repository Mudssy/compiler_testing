
#include <stdio.h>

void printMessage() {
    printf("No overloaded functions detected\n");
}

// This is the overloaded function
void printMessage(int num) {
    __asm__(".symver printMessage,printMessage@GLIBC_2.0"); // This line ensures that each call to printMessage will have different symbol version
    printf("Overloaded functions detected\n");
}

int main() {
    printMessage();  // This should print "No overloaded functions detected"
    printMessage(1);  // This should print "Overloaded functions detected"
    return 0;
}
