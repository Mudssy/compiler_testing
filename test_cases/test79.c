
#include <stdio.h>

int main() {
    int input;
    printf("Enter a number between 1 and 4: ");
    scanf("%d", &input);
    
    switch (input) {
        case 1:
            printf("You have chosen option 1.\n");
            break;
        case 2:
            printf("You have chosen option 2.\n");
            break;
        case 3:
            printf("You have chosen option 3.\n");
            break;
        case 4:
            printf("You have chosen option 4.\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
