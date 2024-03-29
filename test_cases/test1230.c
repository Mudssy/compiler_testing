
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    int *array;
  
    printf("Enter number of elements:\n");
    scanf("%d", &n);
  
    array = (int*)calloc(n, sizeof(int));
    
    if (array == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    } else {
        printf("Memory successfully allocated using calloc.\n");
        for (i = 0; i < n; i++) {
            array[i] = i + 1;
        }
  
        printf("The elements of the array are: ");
        for (i = 0; i < n; i++) {
            printf("%d, ", array[i]);
        }
    }
    
    free(array);
    return 0;
}
