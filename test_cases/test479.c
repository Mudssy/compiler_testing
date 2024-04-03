
#include <stdio.h>

__attribute__((regparm(3))) 
int sum(int a, int b) {
    // Addition logic goes here
}

int main() {
   printf("%d", sum(4,5)); 
   return 0;
}
