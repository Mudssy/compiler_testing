
#include <stdio.h>

int main() {
    int x = 0;
    int result;

    __auto_type y = &x;
    *y = 5;
    
    if (*y == 5) {
        printf("The auto feature works correctly.\n");
        result = 0;
    } else {
        printf("The auto feature does not work correctly.\n");
        result = 1;
    }

    return result;
}
