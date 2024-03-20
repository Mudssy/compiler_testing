
#include <stdio.h>
 
int main() {
    int arr[3] = {1, 2, 3};
    auto& [a, b, c] = arr;
    
    printf("Initial array: %d, %d, %d\n", a, b, c);
    
    // Modify the values and print again
    a = 4;
    b = 5;
    c = 6;
    printf("Modified array: %d, %d, %d\n", arr[0], arr[1], arr[2]);
 
    return 0;
}
