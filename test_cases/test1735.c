
#include <stdio.h>

void serialize(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
}

int main() {
    // Test case 1: Single-dimensional array
    int test_case1[] = {1, 2, 3};
    serialize(test_case1, sizeof(test_case1) / sizeof(test_case1[0]));
    
    printf("\n");
  
    // Test case 2: Multi-dimensional array
    int test_case2[][3] = {{4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 2; ++i) {
        serialize(test_case2[i], sizeof(test_case2[i]) / sizeof(test_case2[i][0]));
        printf("\n");
    }
  
    return 0;
}
