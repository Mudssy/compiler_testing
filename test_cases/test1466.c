
#include <stdio.h>

int main(void) {
    char str1[] = "Hello";
    char str2[] = " World!";
    char result[50]; // Make sure the size of result is big enough to hold both str1 and str2
    
    int i, j;

    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }

    // Add the null-terminator at the end of result string
    result[i+j] = '\0';

    printf("Concatenated String: %s\n", result);

    return 0;
}
