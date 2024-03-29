
#include <stdio.h>

int main(void) {
    char buffer[256];
    printf("Enter some text: ");
    
    // fgets reads from standard input (usually a keyboard), 
    // and stores it in the specified buffer:
    fgets(buffer, sizeof(buffer), stdin);

    printf("\nYou entered: %s", buffer);

    return 0; // return statement to ensure program termination
}
