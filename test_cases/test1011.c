
#include <stdio.h>

void print_vec(const void *array, size_t nmemb, size_t size) { // Function to print any type of arrays
    const char *p = (const char *)array;
    for (size_t i = 0; i < nmemb; ++i) {
        switch (size) {
            case sizeof(int):
                printf("%d ", *((int*)p));  // Printing integer elements
                break;
            case sizeof(float):
                printf("%.1f ", *((float*)p));  // Printing float elements
                break;
        }
        p += size;
    }
}

int main(void) {
    int int_array[] = {1, 2, 3, 4, 5};
    print_vec(int_array, sizeof(int_array)/sizeof(*int_array), sizeof(*int_array));
    
    printf("\n");
    
    float float_array[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    print_vec(float_array, sizeof(float_array)/sizeof(*float_array), sizeof(*float_array));
    
    return 0;
}
