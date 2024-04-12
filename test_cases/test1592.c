
#include <stdio.h>

int main() {
    int num = 5;
    char str = 'a';
    double val = 3.14;
    
    printf("%d\n", _Generic(num, int: 0, default: 1)); // Expected output should be 0
    printf("%d\n", _Generic(str, char: 2, default: 3)); // Expected output should be 2
    printf("%d\n", _Generic(val, double: 4, default: 5)); // Expected output should be 4
    
    return 0;
}
