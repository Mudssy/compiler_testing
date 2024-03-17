
#include <stdio.h>

int main() {
    int i = 0;  // Change this value to see different outcomes
    switch(i) {
        case 0:
        case 1:
            printf("Hello world\n");
            break;
        default:
            printf("Not hello world\n");
    }
    return 0;
}
