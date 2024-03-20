
#include <stdio.h>

#define square(N) printf("%d ", N * N);

int main() {
    for (int i = 0; i < 10; ++i) 
        square(i);
    
    return 0;
}
