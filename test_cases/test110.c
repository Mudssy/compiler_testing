
#include <stdio.h>

void print_array(int arr[static 5], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    print_array(nums, 5);
    return 0;
}
