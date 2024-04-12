
#include <stdio.h>
#include <limits.h>

int main() {
    int i = INT_MAX; // maximum integer value

    // Test 1: Integer to float conversion
    float f = (float)i;
    printf("Integer %d converted to float: %f\n", i, f);

    // Test 2: Float to double conversion
    double d = (double)f;
    printf("Float %f converted to double: %lf\n", f, d);

    // Test 3: Integer overflow and underflow
    int j = i + 1; // should be INT_MIN
    if(j > i){
        printf("Integer overflow occurred: %d\n", j);
    }else{
        printf("Integer overflow did not occur\n");
    }

    int k = INT_MIN - 1; // should be INT_MAX
    if (k < i) {
        printf("Integer underflow occurred: %d\n", k);
    } else {
        printf("Integer underflow did not occur\n");
    }
    
    return 0;
}
