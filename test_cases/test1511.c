
#include <stdio.h>

int main() {
    int i = 5;
    double d = 3.14;
    
    // Testing implicit type conversion from int to double
    double result = i + d;
    printf("The result is: %f\n", result);
    
    return 0;
}
