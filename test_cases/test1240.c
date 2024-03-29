
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return ( *(int*)a - *(int*)b );
}

void print_array(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int values[] = { 40, 10, 100, 90, 20, 25 };
    int n = sizeof(values) / sizeof(values[0]);
    
    printf("Before sorting the list is: \n");
    print_array(values, n);
    
    qsort(values, n, sizeof(int), compare);

    printf("\nAfter sorting the list is: \n");
    print_array(values, n);

    return 0;
}
