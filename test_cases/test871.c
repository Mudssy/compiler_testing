
#include <stdio.h>
#include <stdlib.h>  // Include stdlib for malloc()

int main() {
    int value = 0;  // Initialize value

    printf("Enter an integer: ");
    scanf("%d", &value);
    
    if(value >= 1) {  // Check if the input is valid
        // Since there's no C++ vector equivalent, we will use a simple array.
        int *remarks = malloc(sizeof(int) * value);  // Allocate memory for 'value' integers
        
        for (int i = 0; i < value; ++i) {
            remarks[i] = i + 1;  // Fill the array
        }

        printf("The Remarks are: ");
        for (int j = 0; j < value; ++j) {
            printf("%d ", remarks[j]);
        }
        
        free(remarks);   // Don't forget to free memory after use!
    } else {
        printf("Invalid Input");
    }
    
    return 0;
}
