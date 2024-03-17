
#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    for (int i = 0; i < 5; ++i) {
        sum += array[i];
    }

    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
