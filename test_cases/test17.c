
#include <stdio.h>
typedef int my_int; // This typedef line should be included in the output's debug info 

int main() {
    my_int a = 10;
    printf("Value of a: %d\n", a);
    return 0;
}
