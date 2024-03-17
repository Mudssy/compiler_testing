
#include <stdio.h>

int main(void) {
    int x = 5;  // replace with your test case values
    
    _Static_assert((x == 10), "Value is not correct");
     
    printf("The static assert works!\n");

    return 0;
}
