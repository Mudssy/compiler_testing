
#include <stdio.h>

int main() {
    int result;

    result = functionName (42);

    printf("The result is: %d\n", result);
    
    return 0;
}

int functionName(int x) {
    return x * 2;
}
