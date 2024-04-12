
#include <stdio.h>

int main() {
    int option;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        default:
            printf("Invalid option\n");
    }

    return 0;
}
