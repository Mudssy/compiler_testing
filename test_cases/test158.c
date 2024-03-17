
#include <stdio.h>

int main(void) {
    // Define the lambda expression add
    auto add = [](int a, int b) -> int { return a + b; };
    
    // Use the lambda to perform an operation
    int result = add(5, 10);
  
    printf("The result of addition is %d\n", result);
  
    return 0;
}
