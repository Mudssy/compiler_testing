
#include <stdio.h>

int main(void){
    // Creating an anonymous structure and initializing it with values
    struct { int a; int b;} s = {1,2};
    
    // Print the values of the fields in the structure
    printf("s.a: %d\n", s.a);
    printf("s.b: %d\n", s.b);

    // Creating an anonymous union and initializing it with a value
    union { int a; int b;} u = {1};
    
    // Print the values of the fields in the union
    printf("u.a: %d\n", u.a);
    printf("u.b: %d\n", u.b); 

    return 0;
}
