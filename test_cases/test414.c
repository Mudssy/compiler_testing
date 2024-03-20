
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = ", World!";

    // Concatenate two strings
    strcat(str1, str2);

    printf("%s\n", str1);  // Output: Hello, World!

    return 0;
}
