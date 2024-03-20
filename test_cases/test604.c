
#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int *p;

    p = &array[0]; // Pointer to the first element in the array

    printf("First Element: %d\n",*p); // prints first element - Output should be '10'
    
    p++; 
    printf("Second Element: %d\n", *p); // prints second element - Output should be '20'
    
    return 0;
}
