
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int num1 = 3;
    int num2 = 5;
    int sum = add(num1, num2);
    
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}
