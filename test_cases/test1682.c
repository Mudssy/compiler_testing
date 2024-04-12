
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 10);
    
    if (result == 15) {
        printf("The function call is supported and the result is correct\n");
    } else {
        printf("The function call is supported but the result is incorrect: %d", result);
    }
    
    return 0;
}
