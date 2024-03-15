
#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 0; i < 5; ++i) {
        int array[] = {1, 2, 3, 4, 5};
        sum += ((int []){array[i], i})[i];
    }

    printf("%d\n", sum);

    return 0;
}
