
#include <stdio.h>

typedef enum { FALSE=0, TRUE=1 } bool;

int main() {
    bool test = TRUE;
    
    if (test) {
        printf("Enum types are supported!\n");
        return 0;
    } else {
        printf("Unexpected behavior: Enum types are not supported.\n");
        return -1;
    }
}
