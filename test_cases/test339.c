
#include <stdio.h>
#include <immintrin.h>

void print_array(const int* arr, size_t len) {
    for (size_t i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, len);

    __m256i v;
    int permuteControl = 7; // this controls the order of elements in the vector. '7' will reverse the elements.

    for (size_t i = 0; i < len; i += 8) {
        if(i + 8 <= len){
            v = _mm256_loadu_si256((__m256i*)&arr[i]);  // load 8 elements into a vector
            v = _mm256_permute4x64_epi64(v, permuteControl); // reverse the order of elements in the vector
            _mm256_storeu_si256((__m256i*)&arr[i], v);  // store the shuffled elements back into the array
        } else {
            for(size_t j = i; j < len; ++j) {
                int tmp = arr[len - (j - i) - 1];
                arr[len - (j - i) - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    print_array(arr, len);
    return 0;
}
