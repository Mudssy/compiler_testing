
#include <stdio.h>

int main() {
    #define MAX 100

    int array[MAX] = {0};
    int i;

    for (i = 0; i < MAX; ++i) {
        if(i%2 == 0){
            array[i] = -i;
        } else {
            array[i] = i*i;
        }
    }

    for (i = 0; i < MAX; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
