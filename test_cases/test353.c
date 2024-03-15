
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *res1, *res2;
    res1 = (int*) malloc(sizeof(int) * 4);
    res2 = (int*) malloc(sizeof(int) * 4);
    
    for(int i = 0; i < 4; i++) {
        res1[i] = arr[i * 2];
        res2[i] = arr[i * 2 + 1];
    }
    
    printf("Output: ");
    for (int i = 0; i < 4; i++){
        printf("%d ", res1[i]);
    }
    
    printf("\n       ");
    for (int i = 0; i < 4; i++){
        printf("%d ", res2[i]);
    }
    
    free(res1);
    free(res2);

    return 0;
}
