
#include <stdio.h>

int main() {
    int num = 2;
    
    switch(num) {
        case 1:
            printf("Number is one\n");
            break;
            
        case 2:
            printf("Number is two\n");
            break;
        
        default:
            printf("Number is not one or two\n");
    }
    
    return 0;
}
