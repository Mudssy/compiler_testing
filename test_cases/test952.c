
#include <stdio.h>

int main() {
    int i;
    
    // Iterate from 1 to 20
    for(i = 1; i <= 20; ++i) {
        // Check if the number is even or odd and print it out
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }
    
    return 0;
}
