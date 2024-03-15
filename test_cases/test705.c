
#include <stdio.h>

int main() {
    int number = 5;
    char result[32] = "";
    
    switch (number) {
        case 1:
            sprintf(result, "Number is 1");
            break;
        case 2:
            sprintf(result, "Number is 2");
            break;
        case 3:
            sprintf(result, "Number is 3");
            break;
        case 4:
            sprintf(result, "Number is 4");
            break;
        default:
            sprintf(result, "Number is not between 1 and 4");
    }

    printf("%s\n", result);
    
    return 0;
}
