
#include <stdio.h>

int main() {
    #pragma message "This is a pragma message"

    int x = 5;
    if(x > 10) {
        printf("X is greater than 10\n");
    } else if (x < 10){
        printf("X is less than 10\n");
    } else {
#ifdef ERROR_EXAMPLE        
        #error "This is an error example"
#else      
        printf("X is equal to 10\n");
#endif        
    }
    
    return 0;
}
