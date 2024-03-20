
#include <stdio.h>

int main(){
    int number = 2; // binary : 10
    int count = __builtin_popcount(number);
    printf("Number of set bits in %d is %d\n", number, count);
}
