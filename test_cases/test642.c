
#include <stdio.h>

int main() {
    printf("Line 1\n");
    #line 2 "file" /* This is a line control directive */
    printf("Line 2\n");
    return 0;
}
