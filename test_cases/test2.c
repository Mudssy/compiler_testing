
#include <stdio.h>

void print_arguments(int arg1, int arg2) {
    printf("Argument 1 is %d\n", arg1);
    printf("Argument 2 is %d\n", arg2);
}

int main() {
    int num1 = 10;
    int num2 = 20;
    
    print_arguments(num1, num2);
    
    return 0;
}
