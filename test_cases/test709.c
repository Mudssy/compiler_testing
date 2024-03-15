
#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    double c = 30.75;
    
    printf("Before casting:\n");
    printf("a: %d\nb: %f\nc: %lf\n", a, b, c);
    
    // Assigning values to different data types
    a = (int)b + 10;
    b = (float)c - 2.5;
    c = (double)a * 2.75;
    
    printf("\nAfter type casting:\n");
    printf("a: %d\nb: %f\nc: %lf\n", a, b, c);

    return 0;
}
