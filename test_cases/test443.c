
#include <stdio.h>

int main() {
    int sum = 0;
    
    void nest_func(int x, int y) {
        int z = x + y;
        printf("The sum from nested function is: %d\n", z);
        sum += z;
    }
    
    // Call the nested function
    nest_func(5, 10);
    
    // Print the main function's variable
    printf("Main Function's Sum: %d\n", sum);

    return 0;
}
