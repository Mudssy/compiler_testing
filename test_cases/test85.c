
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5) continue; // this will skip printing "i=5" but it will still increment the value of 'i' to 6.
        
        printf("i = %d\n", i);
    }
    
    return 0;
}
