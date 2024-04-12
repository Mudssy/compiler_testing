
#include <stdio.h>

int main() {
    int x = 10;

    if (x > 5) {
        printf("Inside first if block\n");
    } else {
        printf("Inside first else block\n");
    }

    for(int i=0; i<5; i++) {
        printf("%d ", i);
    }
    
    printf("\n");

    int j = 0;
    while (j < 5) {
        printf("%d ", j);
        j++;
    }
  
    return 0;
}
