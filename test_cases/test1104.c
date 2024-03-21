
#include <stdio.h>

int main() {
    int sum = 0;
    
    // Testing break statement
    for(int i=1;i<=10;i++) {
        if (i == 6) {
            break;
        } else if (i == 5){
        	continue;
        }
        sum += i;
    }
    
    printf("Sum with break and continue: %d\n", sum);

    // Testing continue statement
    sum = 0;
    for(int i=1;i<=10;i++) {
        if (i == 5){
        	continue;
        } 
        sum += i;
    }
    
    printf("Sum with continue: %d\n", sum);

    // Testing break statement
    sum = 0;
    for(int i=1;i<=10;i++) {
        if (i == 6) {
            break;
        } 
        sum += i;
    }
    
    printf("Sum with break: %d\n", sum);

    return 0;
}
