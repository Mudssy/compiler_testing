
#include <ctype.h>
#include <stdio.h>

int main() {
    int c;
    
    for (c = 0; c <= 255; c++) {
        if (isprint(c))
            printf("Character %c is printable\n", c);
        else
            printf("Character %c is not printable\n", c);
    }
    
    return 0;
}
