
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    int result;

    result = memcmp(str1, str2, 5);

    if (result > 0) {
        printf("Str1 is greater than Str2\n");
    } else if (result < 0) {
        printf("Str1 is less than Str2\n");
    } else {
        printf("Str1 is equal to Str2\n");
    }
    
    return 0; // Make sure the program returns in all cases
}
