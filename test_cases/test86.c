
#include <stdio.h>

int main() {
    int x = 1;

    if (x != 1) goto exit;

    printf("Hello World\n");

exit:  // This is the label for the 'goto' statement

    return 0;
}
