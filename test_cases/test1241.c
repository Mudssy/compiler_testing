
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num = -5;
    int abs_num = abs(num);
    
    printf("The absolute value of %d is: %d\n", num, abs_num); // expected output: 5
    
    if (abs_num == 5) {
        printf("Test Passed\n");
    } else {
        printf("Test Failed\n");
    }
    
    return 0;
}
