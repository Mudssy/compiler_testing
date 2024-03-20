
#include <stdio.h>

int main() {
    int x = 10;
    int y = (x > 5) ? 1 : -1; // test ternary operator

    if(y == 1){
        printf("Passed\n");
    } else{
        printf("Failed\n");
    }
    
    return 0; // ensure program returns and does not run forever
}
