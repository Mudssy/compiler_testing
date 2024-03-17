
#include <stdio.h>

void process(int value) {
    int threshold = 50; // Adjust the threshold based on your requirements
    switch (value) {
        case 1:
            printf("Value is less than threshold.\n");
            break;
        case 2:
            printf("Value is equal to threshold.\n");
            break;
        case 3:
            printf("Value is greater than threshold.\n");
            break;
        default:
            printf("Invalid value provided.\n");
    }
}

int main() {
    int input;
    printf("Enter a number to test heuristics and thresholds:\n");
    scanf("%d", &input);
    process(input);
    return 0;
}
