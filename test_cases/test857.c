
#include <stdio.h>

int main() {
    int x = 10;
    #pragma GCC optimize("O3") // Activate optimizations
    for (int i = 0; i < 1000000000; ++i) {
        if(x > 5){
            ++x;
        }
    }
    printf("%d\n", x);
    return 0;
}
