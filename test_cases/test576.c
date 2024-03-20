
#include <stdio.h>

int main() {
    char charValue = 'a';
    int intValue = 0;
    
    // Perform type casting from char to int
    intValue = (int)charValue;
    
    if(intValue == 97) { 
        printf("Success\n"); 
    } else {
         printf("Failure\n"); 
    }

    return 0;
}
