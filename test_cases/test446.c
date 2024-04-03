
#include <stdio.h>
#include <xmmintrin.h>

void print128_num(__m128 var) {
    float val[4];
    memcpy(val, &var, sizeof(val));
    printf("%.6f %.6f %.6f %.6f\n", 
           val[0], val[1], val[2], val[3]);
}

int main() {
    __m128 var = _mm_setr_ps(1.0, 2.0, 3.0, 4.0);
    
    print128_num(var);

    return 0;
}
