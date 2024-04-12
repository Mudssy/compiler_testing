
#include <stdio.h>

typedef enum {
  FIRST_OPTION,
  SECOND_OPTION,
  THIRD_OPTION
} Option;

void printOption(Option option) {
    switch (option) {
        case FIRST_OPTION:
            printf("First Option\n");
            break;
        case SECOND_OPTION:
            printf("Second Option\n");
            break;
        case THIRD_OPTION:
            printf("Third Option\n");
            break;
        default:
            printf("Invalid option\n");
    }
}

int main() {
    printOption(FIRST_OPTION); // prints "First Option"
    printOption(SECOND_OPTION); // prints "Second Option"
    printOption(THIRD_OPTION); // prints "Third Option"
    return 0;
}
