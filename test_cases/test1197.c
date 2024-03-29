
#include <ctype.h>
#include <stdio.h>

int main() {
    for (char c = '0'; c <= '7'; ++c) {
        printf("isxdigit('%c') = %d\n", c, isxdigit(c));
    }
    
    for (char c = 'A'; c <= 'F'; ++c) {
        printf("isxdigit('%c') = %d\n", c, isxdigit(c));
    }
}
