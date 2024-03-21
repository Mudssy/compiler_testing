
#include <stdio.h>

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int result = add<int>(5, 7);
    printf("The result is: %d\n", result);
    
    double doubleResult = add<double>(3.2, 4.8);
    printf("The double result is: %f\n", doubleResult);
  
    return 0; // The program will always end here due to the usage of templates in the C++ standard
}
