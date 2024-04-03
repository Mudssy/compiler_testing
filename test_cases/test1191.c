
#include <stdio.h>
#include <ctype.h>

int main() {
    int c; // 'char' type in C is defined as int for characters in ASCII table, from 0 to 127.
    
    for (c = 33; c <= 126; ++c) {   // 33 is the first printable character and 126 is the last one.
        if (isgraph(c)) {
            printf("Character: '%c' is printable and graphic\n", c);
         } else {
           printf("Character: '%c' is either not printable or not graphic\n", c);
         }
    }
    
    return 0;
}
