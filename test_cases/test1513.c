
#include <stdio.h>

int main(void) {
    const int x = 10; // constant expression

    switch (x) {
        case 5:
            printf("Case value is 5\n");
            break;
        case 10:
            printf("Case value is 10\n");
            break;
        default:
            printf("Default case\n");
    }
    
    return 0; // This ensures the program returns, preventing it from running forever.
}
