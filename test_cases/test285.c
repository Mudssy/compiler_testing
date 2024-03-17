
#include <stdio.h>
#include <assert.h>

int main(void) {
    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    for (int i = 0; i < 5; ++i) {
        sum += array[i];
    }

    assert(sum == 15);
    printf("Profile-guided optimization handling feature works as expected.\n");
    return 0;
}
