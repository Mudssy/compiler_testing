
#include <stdio.h>

int main() {
    printf("Before default case\n");
    int i = 2;
    switch(i) {
        case 1:
            printf("Case 1\n");
            break;
        default:
            printf("Default case\n");
    }
    printf("After default case\n");
}
