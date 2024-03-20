
#include <stdio.h>
int main() {
    int array[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(array) / sizeof(array[0]); // find length of the array
  
    for (size_t index = 0; index < len; ++index) {
        printf("Index: %zu Element: %d\n", index, array[index]);
    }

    return 0;
}
