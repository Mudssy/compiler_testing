
#include <stdio.h>

typedef struct {
    int a;
    double b[2];
} test_struct;

int main() {
    typedef struct {
        float c[3];
        long d;
        test_struct e;
    } outer_struct;
    
    outer_struct s = {{1.0, 2.0, 3.0}, 4L};
    s.e.a = 5;
    s.e.b[0] = 6.0;
    s.e.b[1] = 7.0;
    
    printf("s.c = {%f, %f, %f}\n", s.c[0], s.c[1], s.c[2]);
    printf("s.d = %ld\n", s.d);
    printf("s.e.a = %d\n", s.e.a);
    printf("s.e.b = {%f, %f}\n", s.e.b[0], s.e.b[1]);
    
    return 0;
}
