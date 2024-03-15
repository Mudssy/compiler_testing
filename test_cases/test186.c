
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    for (int &x : arr) {
        printf("%d ", x);
    }

    return 0;
}
