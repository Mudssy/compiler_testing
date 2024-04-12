
#include <stdio.h>

int main() {
    // This will generate an error because '=' is not allowed outside any function
    =
    10;

    printf("This line should never be executed, due to the above error.\n");

    return 0;
}
