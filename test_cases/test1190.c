
#include <stdio.h>
#include <ctype.h>

int main() {
    int i;
    
    for (i = 0; i < 128; i++) {
        if (iscntrl(i)) {
            printf("Character %d is a control character\n", i);
        } else {
            printf("Character %d is not a control character\n", i);
        }
    }
    
    return 0;
}
