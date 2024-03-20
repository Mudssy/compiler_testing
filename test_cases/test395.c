
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5) {  // This condition is arbitrary and can be changed as needed
            continue;  // If this condition is met, the loop will 'continue' to its next iteration
        }
        
        printf("This number is not skipped: %d\n", i);  // This line of code will only run if the above conditional statement does not execute a 'continue' command
    }
    
    return 0;
}
