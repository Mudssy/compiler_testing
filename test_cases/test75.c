
#include <stdio.h>

int main() {
    int x = 10;
    printf("Value of x before modification: %d\n", x);
    x = (x + 5, x - 2, x * 3); // This line uses the expression statements feature
    printf("Value of x after modification: %d\n", x);
    
    return 0;
}
