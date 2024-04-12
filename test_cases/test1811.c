
#include <limits.h>
#include <stdio.h>

int main() {
    int result;

    // Adding two positive numbers that will exceed INT_MAX
    int x = INT_MAX - 10;
    int y = 20;
    result = x + y;
    
    printf("The result of the addition is: %d\n", result);

    return 0;
}
