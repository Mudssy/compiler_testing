
#include <stdio.h>

void api_function() __attribute__((availability(ios,introduced=13.0))); // Assuming iOS 13.0 as minimum requirement

int main(void) {
    printf("This compiler supports availability annotations.\n");
    
    if(__builtin_available(ios 13.0, *)) {
        api_function();
        printf("The function is available on this system.\n");
    } else {
        printf("The function is not available on this system.\n");
    }
    
    return 0;
}
