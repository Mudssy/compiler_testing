
#include <stdio.h>

int main() {
    int x = 5, y;
    y = (x > 0) && printf("x is positive\n");
    printf("y: %d\n", y);
    
    if(y){
        printf("The condition evaluated to true, so the print statement happened.\n");
    } else {
        printf("The condition evaluated to false, so the print statement didn't happen.\n");
    }

    return 0;
}
