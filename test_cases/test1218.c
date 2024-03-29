
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[50];
    int val = 3;  // This is the value we want to set for each byte in str[]

    memset(str, val, sizeof(str));  // Fill str with 'val'

    // Check if all bytes were filled correctly
    for (size_t i = 0; i < sizeof(str); ++i) {
        if (str[i] != val) {
            printf("Failure\n");
            return 1;
        }
    }

    printf("Success\n");
    return 0;
}
