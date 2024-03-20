
#include <stdio.h>

int main() {
    int i = 10;
    
    // Test statement expression with if-else condition
    (i == 10) ? printf("The value is 10\n") : printf("The value is not 10\n");
    
    // Test statement expression as a return value
    int j = (i > 5) ? 10 : 20;
    printf("j = %d\n", j);
    
    // Test nested statement expressions
    int k = 30;
    int l = (k > 40) ? ((i == 10) ? 100 : 200) : 300;
    printf("l = %d\n", l);
    
    return 0;
}
