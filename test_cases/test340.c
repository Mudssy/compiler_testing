
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <stdlib.h>

void shuffle(int *array, size_t n) {
    if (n > 1) {
        for (size_t i = 0; i < n - 1; ++i) {
            size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
            int t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}

int main(void) {
    srand((unsigned int) time(NULL));
    
    size_t n = 10;
    int *array = malloc(n * sizeof(*array));
    assert(array != NULL);

    for (size_t i = 0; i < n; ++i) {
        array[i] = i + 1;
    }

    shuffle(array, n);
    
    printf("Shuffled Array: ");
    for (size_t i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
  
    free(array);
    return 0;
}
