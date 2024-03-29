
#include <stdio.h>
#include <stdint.h>

int main() {
    // Test Fixed-width Integer Types (stdint.h)
    int_least8_t i = -1;
    uint_fast32_t j = 4000000000u;
    
    if(i < j){
        printf("Fixed-Width Integer types are supported\n");
    } else {
        printf("Fixed-Width Integer types are not supported\n");
    }

    return 0; // Ensures the program doesn't run forever and eventually terminates
}
