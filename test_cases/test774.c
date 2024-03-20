
#include <stdio.h>

int main() {
    int x = 5; // declaration and initialization
    
    if (x > 0) { // if statement
        printf("x is positive\n");
    } else {
        printf("x is not positive\n");
    }

    for(int i=0;i<10;i++){ // for loop
        printf("%d ",i); 
    }
    printf("\n");

    int y = 10;
    while (y > 0) { // while loop
        printf("y = %d\n", y);
        --y;
    }
    
    do{ //do-while loop
        printf("%d ",x); 
        x--;
    }while(x>0);

    return 0; // return statement
}
