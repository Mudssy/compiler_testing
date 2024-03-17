
#include <stdio.h>

void print_index(int arg[2]){
    printf("The value at first index is %d\n", arg[0]);
    printf("The value at second index is %d\n", arg[1]);
}

int main() {
    int array[2] = {5, 7};
    
    print_index(array); // Call function with array as argument
    
    return 0;
}
