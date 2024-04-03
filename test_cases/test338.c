
#include <stdio.h>
#include <time.h>  // for time()
#include <stdlib.h> // for rand(), srand()

void perfectShuffle(int *arr, int n) {
    if (n > 1) {
        srand((unsigned int) time(NULL));  // seed the random number generator with current time

        for (int i = 0; i < n - 1; ++i) {
            int j = i + rand() / (RAND_MAX / (n - i) + 1);  // generate a random index in [i, n-1]

            // swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
