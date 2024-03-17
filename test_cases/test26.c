
#include <stdio.h>

typedef enum {
    ONE = 1,
    TWO = 2,
    THREE = 3
} Numbers;

int main() {
    Numbers my_number = TWO;
    
    switch (my_number) {
        case ONE: 
            printf("The number is one\n"); 
            break;
        case TWO: 
            printf("The number is two\n");
            break;
        case THREE: 
            printf("The number is three\n"); 
            break;
    }
    
    return 0;
}
