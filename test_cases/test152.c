
#include <stdio.h>

template<typename T> 
T add(T a, T b) { 
   return a + b; 
} 

int main() { 
    int x = 5; 
    int y = 10; 
    printf("Result: %d\n", add<int>(x, y));
    
    double m = 5.5; 
    double n = 10.5; 
    printf("Result: %.2f\n", add<double>(m, n));
    
    return 0; 
}
