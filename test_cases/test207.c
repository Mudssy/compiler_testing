
#include <stdio.h>

int main() {
    #error "Testing #error directive for clanglibLex section of compiler."
    printf("This message will not be printed because of the #error directive.\n");
    return 0;
}
