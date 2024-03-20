
#include<stdio.h>

int main() {
    int a = 5, b = 10;
    
    // Less than
    printf("%s\n", a < b ? "True" : "False");
    
    // Greater than
    printf("%s\n", a > b ? "True" : "False");
    
    // Equal to
    printf("%s\n", a == b ? "True" : "False");
    
    // Not equal to
    printf("%s\n", a != b ? "True" : "False");
    
    // Less than or equal to
    printf("%s\n", a <= b ? "True" : "False");
    
    // Greater than or equal to
    printf("%s\n", a >= b ? "True" : "False");

    return 0;
}
