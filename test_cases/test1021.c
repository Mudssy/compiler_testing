
#include <stdio.h>

int main() {
    int array[2][3] = {{10, 20, 30}, {40, 50, 60}};
    
    // Test libFormat's subscript breaking feature
    printf("%d", array[1/*a*/][2]); // expected output: 60

    return 0;
}
