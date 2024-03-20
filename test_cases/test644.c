
#include <stdio.h>

int main() {
    printf("Running with -O3 flag.\n");
    
    #pragma GCC optimize ("-O3")
    int result = 0;
    for (int i=0; i<100000000; i++)
        result += i;
    printf("%d\n", result);
  
    return 0;
}
