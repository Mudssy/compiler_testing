
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int* array, int length) {
    for (int i = 0; i < length - 1; i++) {
        int j = rand() % (length - i);
        if (j != 0) {
            int temp = array[i];
            array[i] = array[i + j];
            array[i + j] = temp;
        }
    }
}

int main() {
    srand(time(NULL));
    int vector[] = {1, 2, 3, 4, 5};
    int length = sizeof(vector) / sizeof(vector[0]);
    shuffle(vector, length);
    
    for (int i = 0; i < length; i++) {
        printf("%d ", vector[i]);
    }
    
    return 0;
}
