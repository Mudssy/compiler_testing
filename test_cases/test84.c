
#include <stdio.h>

int main() {
    int i;
    
    for(i = 0; i < 10; i++) {
        if (i == 5) {
            break;  // Breaks from the loop
        }
        
        printf("%d\n", i);
    }
  
    printf("Loop break\n");  // This is printed when 'break' statement breaks from the loop
    
    return 0;
}
