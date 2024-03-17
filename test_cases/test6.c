
#include <stdio.h>

typedef int MyInt;  // This will generate debug info for the 'MyInt' type

int main() {
    MyInt myVar = 10;
    
    printf("The value of myVar is %d\n", myVar);
    
    return 0;
}
