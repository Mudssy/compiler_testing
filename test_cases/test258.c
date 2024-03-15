
#include <stdio.h>

int main() {
    int result __attribute__((annotate("Testing clanglibLex attribute syntax support")));
    printf("Attribute Syntax Support: %d\n", result);
    return 0;
}
