
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";

    int result = strcmp(str1, str2);

    if (result > 0) {
        printf("Str1 is greater than Str2\n");
    } else if (result < 0) {
        printf("Str1 is less than Str2\n");
    } else {
        printf("Str1 is equal to Str2\n");
    }

    return 0;
}
