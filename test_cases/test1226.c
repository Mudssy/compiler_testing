
#include <stdlib.h>
#include <stdio.h>

int main() {
    char str1[] = "123456";
    char *end;
    long int num = strtol(str1, &end, 10);

    if (*end) {
        printf("Converted string '%s' to number: %ld\n", str1, num);
    } else {
        printf("Failed to convert '%s'\n", str1);
    }

    return 0;
}
