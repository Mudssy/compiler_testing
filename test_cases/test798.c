
#include <stdio.h>

int main() {
    int input;
    printf("Enter an integer: ");
    scanf("%d", &input);

    switch(input) {
        case 1:
            printf("You entered 1.\n");
            break;
        case 2:
            printf("You entered 2.\n");
            break;
        default:
            printf("You didn't enter 1 or 2.\n");
    }

    if (input > 0) {
        printf("The input is positive.\n");
    } else if (input < 0) {
        printf("The input is negative.\n");
    } else {
        printf("The input is zero.\n");
    }

    return 0;
}
