
#include <stdio.h>
typedef int my_int; // Define 'my_int' as equivalent to int.

int main() {
    printf("Hello world\n"); 
    
    my_int i = 10;   // Declare an instance of new type.
    printf("%d", i); // Print out the integer.

    return 0;        // Return with success status.
}
