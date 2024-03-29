
#include <stdio.h>
#include "usrinclude" // This line may not work depending on your compiler setup, make sure to replace it with correct include if needed

int main(void) {
    int value;
    
    printf("Enter a positive integer: ");
    scanf("%d", &value);
    
    if (value < 0) {
        fprintf(stderr, "Error: The input number should be positive!\n");
        return 1; // Returning an error code to indicate that the process did not end successfully.
    } else {
        printf("The absolute value of %d is ", value);
        
        if (value < 0) {
            printf("%d\n", -value);
        } else {
            printf("%d\n", value);
        }
    }
    
    return 0; // Returning success code to indicate that the process did end successfully.
}
