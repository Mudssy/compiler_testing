
#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Element at arr[0][1]: %d\n", arr[0][1]);
    printf("Element at arr[1][2]: %d\n", *(*(arr + 1) + 2));
    return 0;
}
