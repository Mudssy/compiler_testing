
#include <stdio.h>

int main() {
    int num = 3;
    
    switch (num) {
        case 1: {
            int x = 5, y = 6;
            printf("Result for case 1: %d\n", x + y);
            break;
        }
        case 2: {
            float a = 3.0f, b = 4.0f;
            printf("Result for case 2: %.2f\n", a * b);
            break;
        }
        case 3: {
            char str1[] = "Hello";
            char str2[] = ", world!";
            printf("Result for case 3: %s%s\n", str1, str2);
            break;
        }
        default:
            printf("Invalid choice.\n");
    }
    
    return 0;
}
