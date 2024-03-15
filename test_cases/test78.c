
#include <stdio.h>

int main() {
    int num = 4;
    
    switch (num) {
        case 1:
            printf("Number is 1\n");
            break;
        case 2:
            printf("Number is 2\n");
            break;
        case 3:
            printf("Number is 3\n");
            break;
        case 4:
            printf("Number is 4\n");
            break;
        default:
            printf("Number is not in switch cases\n");
    }

    return 0;
}
