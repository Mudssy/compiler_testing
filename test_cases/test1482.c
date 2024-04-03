
#include <stdio.h>

int main() {
    int x;
    
    printf("Enter an integer: ");
    scanf("%d", &x);
  
    if(x > 0) {
        printf("You entered a positive number.\n");
    } else if(x < 0){
        printf("You entered a negative number.\n");
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}
