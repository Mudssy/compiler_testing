
#include <stdio.h>

int main() {
    #pragma clang lib driver(clanglibDriver)

    printf("Linked with clanglibDriver successfully!\n");
    return 0;
}
