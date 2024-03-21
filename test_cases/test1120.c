
#include <stdio.h>

struct TestStruct {
    int x;
};

union TestUnion {
    int x;
    float y;
};

int main() {
    // Test array initializer list parsing
    int arr1[5] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr1[i]);
    }
    
    // Test struct initializer list parsing
    struct TestStruct s = { .x = 123 };
    printf("\n%d ", s.x);
    
    // Test union initializer list parsing
    union TestUnion u = { .y = 456.0f };
    printf("\n%.1f\n", u.y);
    
    return 0;
}
