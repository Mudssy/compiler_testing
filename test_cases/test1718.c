
#include <stdio.h>

int main(void) {
    if (__has_include("SomeNonExistentHeader")) {
        printf("The compiler supports __has_include.\n");
    } else {
        #pragma message ("Your compiler does not support __has_include.")
        return 1; // Return non-zero to signify failure.
    }
    
    if (__has_feature(objc_arc)) {
        printf("The compiler supports Objective-C Automatic Reference Counting.\n");
    } else {
        #pragma message ("Your compiler does not support Objective-C Automatic Reference Counting.")
        return 1; // Return non-zero to signify failure.
    }
    
    printf("All tests passed.\n");
    return 0; // Return zero to signify success.
}
