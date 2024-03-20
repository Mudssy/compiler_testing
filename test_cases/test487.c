
#include <stdio.h>

int __attribute__((warn_unused_result)) myFunction(void) {
    return 10;
}

int main() {
    // This should not generate any warning because the result is used
    int retVal = myFunction();
    
    if (retVal == 10) {
        printf("Got expected return value!\n");
    } else {
        printf("Did not get expected return value! Got: %d\n", retVal);
    }

    // This should generate a warning because the result is ignored
    myFunction();
    
    return 0;
}
