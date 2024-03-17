
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i=0; i<=5; i++) { // This should trigger a warning or error from UBSan
        printf("%d\n", arr[i]);
    }
    return 0;
}
