
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    
    for (c = 0; c <= 127; ++c) {
        if (isgraph(c)) {
            printf("Character: '%c' is printable and graphic\n", c);
        } else {
            printf("Character: '%c' is either not printable or not graphic\n", c);
        }
    }
    
    return 0;
}
