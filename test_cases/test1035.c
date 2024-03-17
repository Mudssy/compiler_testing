
#include <stdio.h>

int main() {
    int (*lambda_function)(int) = ^(int x){ return x * 2; };
    
    printf("The result of lambda function: %d\n", lambda_function(5));
    
    return 0;
}
