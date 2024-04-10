
#include <stdio.h>

int main(void) {
    int value;
    
    printf("Enter a positive integer: ");
    scanf("%d", &value);
    
    if (value < 0) {
        fprintf(stderr, "Error: The input number should be positive!\n");
        return 1; // Returning an error code to indicate that the process did not end successfully.
    } else {
        printf("The input value is valid.\n");
        return 0; // Returning success code to indicate that the process ended successfully.
    }
}
