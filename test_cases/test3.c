
#include <stdio.h>

// Function that returns an integer
int return_integer() {
    int a = 5;
    return a;
}

int main() {
    if (return_integer() == 5) 
        printf("The debug information for function return types is correctly generated\n");
     else
        printf("There's an error with the generation of debug information for function return types\n");
  
    return 0;
}
