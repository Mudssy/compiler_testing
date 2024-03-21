
#include <stdio.h>

int main() {
    printf("Testing Brace Wrapping for Functions Feature\n");
    
    // Test Case 1: Function with Braces
    if(1){
        printf("If statement with braces\n");
    }else{
        printf("Error: If statement without braces\n");
    }
    
    // Test Case 2: One line function with Braces
    int x = (5); printf("%d\n", x);
    
    return 0;
}
