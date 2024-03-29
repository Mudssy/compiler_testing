
#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[] = "123.45";
    double d;
    char *ptr;
    
    d = strtod(s, &ptr);

    if (d == 123.45 && (*ptr == '\0' || *ptr == ' ')) {
        printf("Success!\n");
        return 0;
    } else {
        printf("Failure!\n");
        return -1;
    }
}
