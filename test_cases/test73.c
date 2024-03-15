
#include <stdio.h>

int main() {
    int num = 42;
    double dbl_num = (double) num;
    char ch = 'A';
    int int_ch = (int) ch;

    printf("Original number: %d\n", num);
    printf("Number as double: %.1f\n", dbl_num);
    printf("Original character: %c\n", ch);
    printf("Character as integer: %d\n", int_ch);
    
    return 0;
}
