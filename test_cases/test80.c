
#include <stdio.h>

int main() {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    switch (input) {
        case 1:
            goto label1;
        case 2:
            goto label2;
        default:
            goto label_default;
    }

label1:
    printf("You entered 1.\n");
    return 0;

label2:
    printf("You entered 2.\n");
    return 0;

label_default:
    printf("You didn't enter 1 or 2.\n");
    return 0;
}
