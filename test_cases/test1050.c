
#include <stdio.h>

void func() {
    printf("Test\n");
}

int main() {
    func (); //This line tests the space before parentheses feature
    
    if(printf("Success\n")) {} //If this line runs without crashing, spaces are allowed 
    else printf("Failure\n"); 
                      
    return 0;
}
