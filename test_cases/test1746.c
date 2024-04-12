
#include <stdio.h>
#include <string.h>

int main() {
    int num1 = 5;
    int num2 = 3;
    char* buffer = malloc(sizeof(char) * 100); // Allocate memory for a string
    memset(buffer, '\0', sizeof(char)*100);     // Clear the string

    sprintf(buffer, "Sum: %d", num1 + num2);         // Test arithmetic serialization
    printf("%s\n", buffer);
    memset(buffer, '\0', sizeof(char)*100);          // Clear the string

    sprintf(buffer, "Logical AND: %d", num1 && num2);  // Test logical AND serialization
    printf("%s\n", buffer);
    memset(buffer, '\0', sizeof(char)*100);           // Clear the string

    sprintf(buffer, "Logical OR: %d", num1 || num2);   // Test logical OR serialization
    printf("%s\n", buffer);   
    free(buffer);  // Free allocated memory

    return 0;
}
