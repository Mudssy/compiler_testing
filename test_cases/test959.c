
#include <stdio.h>

int globalVar = 10;
extern int externalFunc(void);

int main() {
    printf("Global variable value is %d\n", globalVar);
    
    int result = externalFunc();
    printf("Result from the function call: %d\n", result);

    return 0;
}
