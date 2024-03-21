
#include <stdio.h>

void loop_unswitching(int *array) {
    for (int i = 0; i < 128; ++i) {
        if (array[i] != i) {
            printf("Unsuccessful\n");
            return;
        }
    }
    
    printf("Successful\n");
}

int main() {
    int array[128];
    for (int i = 0; i < 128; ++i) {
        array[i] = i;
    }
    
    loop_unswitching(array);
    
    return 0;
}
