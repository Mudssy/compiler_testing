
#include <stdio.h>

int main() {
    char str[100];
    int num;
    
    // This string is expected to be converted into an integer
    sprintf(str, "25");
    
    if (sscanf(str, "%d", &num) == 1 && num == 25) {
        printf("Success: sscanf worked as expected.\n");
        return 0; // Indicate success
    } else {
        printf("Error: sscanf did not work as expected.\n");
        return -1; // Indicate failure
    }
}
