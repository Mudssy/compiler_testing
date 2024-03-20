
#include <stdio.h>
int cleanup(void) __attribute__((cleanup(__my_function)));

int my_function() { printf("Cleanup function called!\n"); }

int main() 
{ 
    int x = 10;  // local variable
    __auto_type y = x; 

    switch (y) {
        case 5: printf("%d is five\n", y); break;
        case 10: printf("%d is ten\n", y); break;
        default: printf("No match found\n"); break;
    }
    
    return 0; 
} 
