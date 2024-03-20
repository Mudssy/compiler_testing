
#include <stdio.h>

typedef enum { ONE = 1, TWO, THREE } Numbers;

int main() {
    Numbers num = TWO;
    
    switch (num) {
        case ONE:
            printf("The number is one\n");
            break;
        case TWO:
            printf("The number is two\n");
            break;
        case THREE:
            printf("The number is three\n");
            break;
        default:
            printf("Unknown number\n");
    }
    
    return 0;
}
