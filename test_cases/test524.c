
#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Prefetch the first element of arr into cache
    __builtin_prefetch(arr, 0 /* rw */, 0 /* locality */);
    
    // Print the value at the prefetched location. If prefetch is successful, this will be fast.
    printf("%d\n", *(__int128*)&arr[0]);
    
    return 0;
}
