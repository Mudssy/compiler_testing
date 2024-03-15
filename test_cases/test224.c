
#include <stdio.h>

enum clanglibLex {
    FOO = 10,
    BAR = 20,
    BAZ = 30
};

int main() {
    enum clanglibLex value = BAR;
    
    if (value == FOO) {
        printf("Value is FOO\n");
    } else if (value == BAR) {
        printf("Value is BAR\n");
    } else if (value == BAZ) {
        printf("Value is BAZ\n");
    } else {
        printf("Unknown value\n");
    }
    
    return 0;
}
