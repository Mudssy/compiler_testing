
#include <stdio.h>

int main(void) {
    int age = 30;
    
    switch (age) {
        case 16:
            printf("You can't drive.\n");
            break;
        case 18:
            printf("You can now vote.\n");
            break;
        case 21:
            printf("You can now drink.\n");
            break;
        default:
            printf("You are too young or old to do anything special.\n");
    }
    
    return 0; // Ensure the program returns
}
