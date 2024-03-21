
#include <stdio.h>

int vla_sum(size_t n, int arr[n]) {
    int sum = 0;
    for (size_t i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    size_t size;
    printf("Enter the number of elements you want to store: ");
    scanf("%zu", &size);
    
    int array[size];  // VLA
    printf("Enter %zu integers: ", size);
    for (size_t i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    
    printf("Sum = %d\n", vla_sum(size, array));
    
    return 0;
}
