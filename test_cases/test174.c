
#include <stdio.h>

#define max(a, b) ((a > b) ? a : b)  // This is how you can create a macro for the functionality of a function template

int main() {
    printf("Max value is %d\n", max(3, 7)); // This will print "Max value is 7"
}
