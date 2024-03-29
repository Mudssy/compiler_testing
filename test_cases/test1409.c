
#include <stdio.h>

int main(void) {
    int num = 5; // Change this value to test different cases
    
    switch (num % 4) {
        case 0:
            printf("Num is divisible by 4\n");
            break;
        case 1:
            printf("Num is 1 more than a multiple of 4\n");
            break;
        case 2:
            printf("Num is 2 more than a multiple of 4\n");
            break;
        case 3:
            printf("Num is 3 more than a multiple of 4\n");
            break;
    }
    
    return 0;
}
