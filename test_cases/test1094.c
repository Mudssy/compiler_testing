
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    
    // Declare pointer variables
    int *p1 = &x; 
    int *p2 = &y; 
    
    printf("p1 points to: %d\n", *p1);
    printf("p2 points to: %d\n", *p2);
    printf("Are the pointers equal? : %s\n", (p1 == p2 ? "Yes" : "No")); 
    
    return 0;
}
