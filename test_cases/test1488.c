
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    
    // Testing relational operators
    if(a > b) printf("Greater than test case failed\n");
    else if (b >= a) printf("Greater than or equal to test case failed\n");
    else if (b < a) printf("Less than test case failed\n");
    else if (b <= a) printf("Less than or equal to test case failed\n");
    
    // Testing equality operators
    if(a == b) printf("Equal to test case failed\n");
    else if (a != b) printf("Not equal to test case failed\n");

    return 0;
}
