
#include <stdio.h>

int main() {
    int i = 2;
    
    switch (i) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Greater than Three or Less than One\n");
    }
    
    return 0;
}
