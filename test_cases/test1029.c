
#include <stdio.h>

int main() {
    #define PRINT_OUTPUT(output) \
        printf("The output of " #output " is: %d\n", output);

    int clanglibFormat = 42;
    PRINT_OUTPUT(clanglibFormat)

    return 0;
}
