
#include <stdio.h>

int main() {
    printf("// This is a single line comment.\n");
    printf("/* This is a \nmulti-line comment. */\n");
    printf("This text should be printed, while the above comments should be stripped.\n");
    return 0;
}
