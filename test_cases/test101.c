
#include <stdio.h>

// Static function declared and defined in global scope
static void printHello() {
    printf("Hello from static function!\n");
}

int main() {
    // Calling the static function within main function
    printHello();
    
    return 0;
}
